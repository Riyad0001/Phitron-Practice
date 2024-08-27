from abc import ABC
from order import Order

class User(ABC):
    def __init__(self,name,phone,Email,address):
        self.name=name
        self.phone=phone
        self.Email=Email
        self.address=address

class Customer(User):
    def __init__(self,name,phone,Email,address):
        super().__init__(name,phone,Email,address)
        self.cart=Order()

    def view_menu(self,resturent):
        resturent.menu.show_menu()
    def add_to_cart(self,resturent,item_name,quantity):
        item=resturent.menu.find_item(item_name)
        if item:
            if quantity>item.quantity:
                print("Item Quantity Exceded")
            else:
                item.quantity=quantity
                self.cart.add_item(item)
                print("Item added")
        else:
            print("Item Not found")

    def view_cart(self):
        print("***View Cart***")
        print("Name\tPrice\tQuantity")
        for item,quantity in self.cart.items.items():
            print(f'{item.name}\t{item.price}\t{quantity}')
        print(f"Total Price : {self.cart.total_price}")

    def pay_bill(self):
        print(f"Total {self.cart.total_price}$ paid Succesfully")
        self.cart.clear()



class Employee(User):
    def __init__(self,name,phone,Email,address,age,designation,salary):
        super().__init__(name,phone,Email,address)
        self.age=age
        self.designation=designation
        self.salary=salary

# em=Employee("Ryaan",76898,'redrt@vfghfv','Dhaka',32,'Ches',30000)
# print(em.phone)
class Admin(User):
    def __init__(self,name,phone,Email,address):
        super().__init__(name,phone,Email,address)
        
    def add_employee(self,resturent,employee):
        resturent.add_employee(employee)


    def view_employee(self,resturent):
        resturent.view_employee()

    def add_new_item(self,resturent,item):
        resturent.menu.add_menu_item(item)

    def remove_item(self,resturent,item):
        resturent.menu.remove_item(item)

    def view_items(self,resturent):
        resturent.menu.show_menu()