# class Shop:
    
#     def __init__(self,name):
#         self.name=name
#         self.products=[]
#         self.balance=0
#     def __repr__(self):
#         return f"Shop nmae is {self.name}"
#     def add_product(self,name,price):
#         product=Product(name,price)
#         self.products.append(product)
#     def sell(self,product):
#         self.balance+=product.price




# class Product:
#     def __init__(self,name,price):
#         self.name=name
#         self.price=price
#     def __repr__(self):
#         return self.name


# # shop1=Shop('lal')
# # print(shop1.name)
# Sh1=Shop('Shopno')
# Sh1.add_product('chal',70)
# Sh1.add_product('alu',50)
# print(Sh1.products)
# Sh2=Shop('Shopno 2')
# Sh2.add_product('dal',70)
# Sh2.add_product('kochu',50)
# print(Sh2.products)




##Encapsulation


# class Shop:
    
#     def __init__(self,name):
#         self.name=name
#         self.products=[]
#         self.__balance=100
#     def __repr__(self):
#         return f"Shop nmae is {self.name}"
#     def add_product(self,name,price):
#         product=Product(name,price)
#         self.products.append(product)
#     def sell(self,product):
#         self.balance+=product.price
#     def get_balance(self):
#         return self.__balance-self.__tax_add()
#     def __tax_add(self):
#         return self.__balance*0.10




# class Product:
#     def __init__(self,name,price):
#         self.name=name
#         self.price=price
#     def __repr__(self):
#         return self.name


# # shop1=Shop('lal')
# # print(shop1.name)
# Sh1=Shop('Shopno')
# Sh1.add_product('chal',70)
# Sh1.add_product('alu',50)
# # Sh1.balance=0
# print(Sh1.get_balance())
# # Sh1.sell('chal')
# # print(Sh1.balance)

# class watch:
#     def __init__(self,price):
#         self.price=price


# class HelTracker:
#     def __init__(self,Time):
#         self.Time=Time

# class Fak(watch,HelTracker):
#     def __init__(self,price,Time):
#         watch.__init__(self,price)
#         HelTracker.__init__(self,Time)

# faki=Fak(765,66)
# print(faki.price)


from abc import ABC,abstractclassmethod
class Shape(ABC):
    @abstractclassmethod
    def fak(self):
        pass

    def ini(self):
        pass


class Racktan(Shape):
    def __init__(self,w,q):
        self.w=w
        self.q=q

    def dai(self):
        return w*quit
    def fak(self):
        pass

dzm=Racktan(55,88)