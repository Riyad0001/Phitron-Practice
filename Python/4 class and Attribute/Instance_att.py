class Shoping:
    Name="Jamunnnna"
    # cart=[]

    def __init__(self,buyer):
        self.buyer=buyer
        self.cart=[]

    def add_to_cart(self,item):
        self.cart.append(item)




Riyad=Shoping("Riyaaad ")
Riyad.add_to_cart("Shoe")
Riyad.add_to_cart("Watch")
print(Riyad.cart)

Queen=Shoping("Queen")
Queen.add_to_cart("Condom")
Queen.add_to_cart("I Pill")
print(Queen.cart)