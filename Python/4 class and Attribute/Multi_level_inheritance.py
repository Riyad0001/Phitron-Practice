class Vehicale:
    def __init__(self,name,price):
        self.name=name
        self.price=price
    def move(self):
        pass
    def __repr__(self) -> str:
        return f'{self.price} and {self.name}'

class Bus(Vehicale):
    def __init__(self,name,price,seat):
        self.seat=seat
        super().__init__(name,price)
    def __repr__(self) -> str:
        return super().__repr__()



class Truck(Vehicale):
    def __init__(self,name,price,weight):
        self.weight=weight
        super().__init__(name,price)

class Pickup(Truck):
    def __init__(self,name,price,weight):
        self.weight=weight
        super().__init__(name,price,weight)

class AcBus(Bus):
    def __init__(self,name,price,seat,temparature):
        self.temparature=temparature
        super().__init__(name,price,seat)

    def __repr__(self) -> str:
        print(f'{self.seat}')
        return super().__repr__()





green_line=AcBus("Green 101",2,32,26)
print(green_line)