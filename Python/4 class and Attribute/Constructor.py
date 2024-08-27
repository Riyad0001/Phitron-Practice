class pen:
    manufactured='Bd'

    def __init__(self,name,price,brand):
        self.name=name
        self.price=price
        self.brand=brand


p1=pen("Kolom",7,"RFL")
print(p1.name,p1.price,p1.brand)

p2=pen("pencil",10,"sapkj")

print(p2.brand,p2.manufactured,p2.price)