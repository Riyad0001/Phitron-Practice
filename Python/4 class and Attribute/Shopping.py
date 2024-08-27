class Shopping:
    def __init__(self,name):
        self.name=name
        self.cart=[]

    def add_to_cart(self,item,price,quantity):
        product={'item':item,'price':price,'quantity':quantity}
        self.cart.append(product)
    def remove_item(self,item):
        for product in self.cart:
            if product['item']==item:
                self.cart.remove(product)

    def checkout(self,ammount):
        Total=0
        for item in self.cart:
            Total+=item['price']*item['quantity']
        print(f'Total price :{Total}')

        if ammount<Total:
            print(f'Please Provide {Total-ammount} More')
        else:
            extra=ammount-Total
            print(f'Your extra tk is {extra} here')


Rid=Shopping('Rid Chowdhury')
Rid.add_to_cart('Laptop',500,1)
Rid.add_to_cart('I phone',200,2)
Rid.add_to_cart('Head Phone',20,1)
Rid.remove_item('Laptop')
Rid.checkout(600)

print(Rid.cart)