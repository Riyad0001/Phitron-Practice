class Laptop:
    def __init__(self,brand,price,color,mamory):
        self.brand=brand
        self.price=price
        self.color=color
        self.mamory=mamory

    def run(self):
        return f"Runing laptop {self.brand}"
    def coding(self):
        return f'Learning Pythonnn'

class phone:
    def __init__(self,brand,price,color,Dual_sim):
        self.brand=brand
        self.price=price
        self.color=color
        self.Dual_sim=Dual_sim

    def run(self):
        return f"Runing Mobile {self.brand}"
class camera:
    def __init__(self,brand,price,color,Pixel):
        self.brand=brand
        self.price=price
        self.color=color
        self.Pixel=Pixel

    def run(self):
            return f"Runing Camera {self.brand}"