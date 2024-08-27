class Gadget:
    def __init__(self,brand,price,color):
        self.brand=brand
        self.price=price
        self.color=color
    def run(self):
        return f"Runing laptop {self.brand}"

class Laptop:
    def __init__(self,brand,price,color,mamory):
        self.mamory=mamory
    def coding(self):
        return f'Learning Pythonnn'

class phone(Gadget):
    def __init__(self,brand,price,color,Dual_sim):
        self.Dual_sim=Dual_sim
        super().__init__(brand,price,color)
    def __repr__(self) -> str:
        return f"Your Phone {self.brand} Price: {self.price} Color: {self.color} Dual_sim {self.Dual_sim}"
class camera:
    def __init__(self,Pixel):
        self.Pixel=Pixel
    def lens(self,price):
        self.price=price

my_phone=phone("Iphone",2000,'Black',True)
print(my_phone.run)
print(my_phone)