class Shopi:
    def __init__(self,name):
        self.name=name
    @classmethod
    def hudai_dekhi(self,item):
        print("Hudaii dekhi ",item)
    @staticmethod
    def devid(a,b):
        print(a*b)


shop=Shopi("Jamuna")
shop.hudai_dekhi("Kugi")
Shopi.hudai_dekhi("Gamsa")
Shopi.devid(4,4)
shop.devid(4,6)