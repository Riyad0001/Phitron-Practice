from vehical import Vehical,Car,Bike
from ride import Ride,RideRequest,RideMatching,RideSharing
from user import User,Rider,Driver

Uber=RideSharing("Uber_R")
raiad=Rider("Ryaan Riyad",'riyad@hotmail.com',1233,'Notunbazar',300)
Uber.add_rider(raiad)

suman=Driver("Sumon Ahmed",'suman@gmail.com',6546,'Badda')
Uber.add_driver(suman)
raiad.request_ride(Uber,"Diabari",'car')

suman.reach_destination(raiad.current_ride)
raiad.show_current_ride()
# print(Uber)
