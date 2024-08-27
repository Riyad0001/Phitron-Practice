from user import Customer,Seller
from product import Product
from order import Order
class ShoppingApp:
    def __init__(self,name):
        self.name=name
        self.customers=[]
        self.sellers=[]
        self.products=[]
        self.logged_in_user=None

    def create_customer_ac(self,email,password):
        customer=Customer(email,password)
        self.customers.append(customer)
        return customer

    def create_seller_ac(self,email,password):
        seller=Seller(email,password)
        self.sellers.append(seller)
        return seller

    def add_product(self,seller,name,price,stock):
        product=seller.add_product(name,price,stock)
        self.products.append(product)
        return product

    def view_all_products(self):
        available_products=[product for product in self.products if product.stock >0]
        for product in available_products:
            print(f"Product : {product.name},Price : {product.price},Stock : {product.stock},Seller : {product.seller.email}")

    def login(self,email,password,user_type):
        if user_type=="customer":
            for customer in self.customers:
                if customer.email ==email and customer.password==password:
                    self.logged_in_user=customer 
                    return customer
        elif user_type=="seller":
            if user_type=="seller":
                for seller in self.sellers:
                    if seller.email ==email and seller.password==password:
                        self.logged_in_user=seller 
                        return seller
        return None

    def logout(self):
        self.logged_in_user=None
