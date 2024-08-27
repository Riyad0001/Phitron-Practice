class Product:
    def __init__(self,name,price,stock,seller):
        self.name=name
        self.price=price
        self.stock=stock
        self.seller=seller

    def reduce_stock(self,quantity):
        self.stock-=quantity