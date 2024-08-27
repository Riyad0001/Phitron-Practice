from order import Order
from product import Product
class User:
    def __init__(self,email,password):
        self.email=email
        self.password=password

class Customer(User):
    def __init__(self,email,password):
        super().__init__(email,password)
        self.orders=[]

    def place_order(self,product,quantity):
        if product.stock>=quantity:
            order=Order(self,product,quantity)
            product.reduce_stock(quantity)
            self.orders.append(order)
            return order
        else:
            print("Product Out of Stock")

class Seller(User):
    def __init__(self,email,password):
        super().__init__(email,password)
        self.products=[]
    def add_product(self,name,price,stock):
        product=Product(name,price,stock,self)
        self.products.append(product)
        return product
