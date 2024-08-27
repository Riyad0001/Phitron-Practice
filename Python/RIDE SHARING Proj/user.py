from abc import ABC,abstractmethod
from ride import RideRequest,RideMatching
class User(ABC):
    def __init__(self,name,email,nid):
        self.name=name
        self.email=email
        self.nid=nid
        self.wallet=0

    @abstractmethod
    def display_profile(self):
        raise NotImplementedError


class Rider(User):
    def __init__(self,name,email,nid,current_location,initial_ammount):
        super().__init__(name,email,nid)
        self.current_location=current_location
        self.wallet=initial_ammount
        self.current_ride=None

    def display_profile(self):
        print(f"Rider {self.name} and Email {self.email}")

    def load_cash(self,ammount):
        if ammount>0:
            self.wallet +=ammount
        else:
            print("Ammount less then 0")

    def update_location(self,current_location):
        self.current_location=current_location

    def request_ride(self,ride_sharing,destination,vehical_type):
        ride_request=RideRequest(self,destination)
        ride_matching=RideMatching(ride_sharing.drivers)
        ride=ride_matching.find_driver(ride_request,vehical_type)
        ride.rider=self
        self.current_ride=ride
        print("Yeah! We Goat a Ride")      

    def show_current_ride(self):
        print("Ride Details!!")
        print(f"Rider : {self.name}")
        print(f"Driver : {self.current_ride.driver.name}")
        print(f"Selected Car : {self.current_ride.vehical.vehical_type}")
        print(f"Start Location : {self.current_ride.start_location}")
        print(f"End Location : {self.current_ride.end_location}")
        print(f"Total Cost : {self.current_ride.eastimated_fare}")


class Driver(User):
    def __init__(self,name,email,nid,current_location):
        super().__init__(name,email,nid)
        self.current_location=current_location
        self.wallet=0

    def display_profile(self):
        print(f"Driver Name : {self.name}")

    def accept_ride(self,ride):
        ride.start_ride()
        ride.set_driver(self)

    def reach_destination(self,ride):
        ride.end_ride()



