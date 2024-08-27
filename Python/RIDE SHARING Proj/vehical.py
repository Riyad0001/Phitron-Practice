from abc import ABC
class Vehical(ABC):
    speed={
        'car':100,
        'bike':80,
        'cng' :50
    }
    def __init__(self,vehical_type,rate,licance_plate):
        self.vehical_type=vehical_type
        self.rate=rate
        self.licance_plate=licance_plate

class Car(Vehical):
    def __init__(self,vehical_type,rate,licance_plate):
        super().__init__(vehical_type,rate,licance_plate)

class Bike(Vehical):
    def __init__(self,vehical_type,rate,licance_plate):
        super().__init__(vehical_type,rate,licance_plate)
