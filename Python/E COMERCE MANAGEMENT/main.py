from user import Customer,Seller
from product import Product
from order import Order
from shopping_ap import ShoppingApp

Agora=ShoppingApp("Agora")


while True:
    print("\nWelcome to the E-Shopping App")
    print("1. Sign Up as Customer")
    print("2. Sign Up as Seller")
    print("3. Login")
    print("4. View Products")
    print("5. Add Product (Seller only)")
    print("6. Place Order (Customer only)")
    print("7. Logout")
    print("8. Exit")
    x = int(input("Enter your choice: ")) 

    if x==1:
        email = input("Enter email: ")
        password = input("Enter password: ")
        Agora.create_customer_ac(email,password)
        print("Customer account created successfully!")
    elif x==2:
        email = input("Enter email: ")
        password = input("Enter password: ")
        Agora.create_seller_ac(email,password)
        print("Seller account created successfully!")
    elif x==3:
        email = input("Enter email: ")
        password = input("Enter password: ")
        user_type = input("Login as (customer/seller): ").lower()
        user=Agora.login(email,password,user_type)
        if user:
            print(f"Logged in as {user_type}")
        else:
            print("Invalid credentials")
    elif x==4:
        Agora.view_all_products()
    elif x==5:
        if isinstance(Agora.logged_in_user,Seller):
            name = input("Enter product name: ")
            price = input("Enter product price: ")
            stock = int(input("Enter product stock: "))
            Agora.add_product(Agora.logged_in_user,name,price,stock)
            # price("Product Added Succesfully")
        else:
            print("Only SEller can Add Product")
    elif x==6:
        if isinstance(Agora.logged_in_user,Customer):
            product_name = input("Enter product name to order: ")
            quantity = int(input("Enter quantity: "))
            product=next((p for p in Agora.products if p.name==product_name and p.stock>0),None)
            if product:
                Agora.logged_in_user.place_order(product,quantity)
                print("Order placed successfully!")
            else:
                print("Product not found or out of stock")
        else:
            print("Only customers can place orders")
    elif x==7:
        Agora.logout()
        print("Logged out successfully!")
    elif x==8:
        break
    else:
        print("Invalid choice, please try again")
         








