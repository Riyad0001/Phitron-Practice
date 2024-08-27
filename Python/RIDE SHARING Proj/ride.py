from datetime import datetime
from vehical import Car,Bike
class RideSharing:
    def __init__(self,company_name):
        self.company_name=company_name
        self.drivers=[]
        self.riders=[]
        self.rides=[]

    def add_rider(self,rider):
        self.riders.append(rider)

    def add_driver(self,driver):
        self.drivers.append(driver)

    def __str__(self):
        return f"Company Name : {self.company_name} with riders {len(self.riders)} and Drivers : {len(self.drivers)}"


class Ride:
    def __init__(self,start_location,end_location,vehical):
        self.start_location=start_location
        self.end_location=end_location
        self.driver=None
        self.rider=None
        self.start_time=None
        self.end_time=None
        self.eastimated_fare=self.calculate_fare(vehical.vehical_type)
        self.vehical=vehical

    def set_driver(self,driver):
        self.driver=driver

    def start_ride(self):
        self.start_time=datetime.now()

    def end_ride(self):
        self.end_time=datetime.now()
        self.rider.wallet -=self.eastimated_fare
        self.driver.wallet +=self.eastimated_fare

    def calculate_fare(self,vehical_type):
        distance=10
        fare_par_km={
            'cng':25,
            'bike':30,
            'car':40
        }
        return distance *fare_par_km.get(vehical_type)

    def __repr__(self):
        return f"Ride Details.Started {self.start_location} to {self.end_location}"


class RideRequest:
    def __init__(self,rider,end_location):
        self.end_location=end_location
        self.rider=rider


class RideMatching:
    def __init__(self,driver):
        self.available_drivers=driver

    def find_driver(self,ride_request,vehical_type):
        if len(self.available_drivers)>0:
            print("Looking for Drivers...")
            driver=self.available_drivers[0]
            
            if vehical_type=='car':
                vehical=Car('car',40,'ABC455')
            elif vehical_type=='bike':
                vehical=Bike("bike",28,"BBD566")
            ride=Ride(ride_request.rider.current_location,ride_request.end_location,vehical)
            driver.accept_ride(ride)
            return ride
