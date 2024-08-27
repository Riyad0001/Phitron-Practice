from food_item import Fooditem
from resturent import Resturent
from order import Order
from menu import Menu
from user import Customer,Admin,Employee

PizzaBurg=Resturent('PizzaBurg')

def customer_menu():
    name=input("Enter Your Name : ")
    email=input("Enter Your Email : ")
    phone=input("Enter Your Phone : ")
    address=input("Enter Your Adress : ")
    customer=Customer(name=name,phone=phone,Email=email,address=address)

    while True:
        print(f"Welcome {customer.name}")
        print("1. View Menu")
        print("2. Add to Cart")
        print("3. View Cart")
        print("4. Pay Bill")
        print("5. Exit")

        ch=int(input("Enter your Choice: "))
        if ch==1:
            customer.view_menu(PizzaBurg)
        elif ch==2:
            item_name=input("Enter Your Food: ")
            item_quantity=int(input("Enter Quantity: "))
            customer.add_to_cart(PizzaBurg,item_name=item_name,quantity=item_quantity)
        elif ch==3:
            customer.view_cart()
        elif ch==4:
            customer.pay_bill()
        elif ch==5:
            break
        else:
            print("Invalid Choice")


def admin_menu():
    name=input("Enter Your Name : ")
    email=input("Enter Your Email : ")
    phone=input("Enter Your Phone : ")
    address=input("Enter Your Adress : ")
    admin=Admin(name=name,phone=phone,Email=email,address=address)

    while True:
        print(f"Welcome {admin.name}")
        print("1. Add New Item")
        print("2. Add New Employee")
        print("3. View Employee")
        print("4. View Items")
        print("5. Delete Items")
        print("6. Exit")

        ch=int(input("Enter your Choice: "))
        if ch==1:
            item_name=input("Enter Item Name: ")
            item_price=int(input("Enter Item Price: "))
            item_quantity=int(input("Enter Item Quantity: "))
            item=Fooditem(item_name,item_price,item_quantity)
            admin.add_new_item(PizzaBurg,item)
        elif ch==2:
            name=input("Enter Employee Name : ")
            phone=input("Enter Employee Phone : ")
            email=input("Enter Employee Email : ")
            address=input("Enter Employee Address : ")
            age=input("Enter Employee Age : ")
            degi=input("Enter Employee Designation : ")
            salary=int(input("Enter Employee Salary : "))
            emp_add=Employee(name,phone,email,address,age,degi,salary)
            admin.add_employee(PizzaBurg,emp_add)
        elif ch==3: 
            admin.view_employee(PizzaBurg)
        elif ch==4:
            admin.view_items(PizzaBurg)
        elif ch==5:
            itm=input("Enter your Removing Item : ")
            admin.remove_item(PizzaBurg,itm)
        elif ch==6:
            break
        else:
            print("Invalid Choice")

while True:
    print("****Welcome****")
    print("1. Customer")
    print("2. Resturent Admin")
    print("3. Exit")
    x=int(input("Enter Your Choice : "))
    if x==1:
        customer_menu()
    elif x==2:
        admin_menu()
    elif x==3:
        break
    else:
        print("Invalid Option.")