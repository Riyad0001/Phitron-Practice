class Product:
    def __init__(self,name,price,quantity):
        self.name=name
        self.price=price
        self.quantity=quantity
    def __repr__(self) -> str:
        return f'P Name : {self.name} Price: {self.price} Quantity: {self.quantity}'

class Shop:
    def __init__(self):
        self.products=[]
    def add_product(self,item):
        self.products.append(item)
    def buy_product(self,product_name):
        for product in self.products:
            if product.name==product_name:
                if product.quantity>0:
                    product.quantity-=1
                    return f"Congratulations! You've successfully bought {product.name}. Enjoy your purchase!"
                else:
                    return f"This {product.name} is Out of Stock"
        return f"This Product is not in this Shop"

sop1=Shop()
p1=Product("Chal",40,0)
p2=Product("Dal",60,2)
sop1.add_product(p1)
sop1.add_product(p2)
print(sop1.buy_product("mal"))



