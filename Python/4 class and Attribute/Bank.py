class bank:
    def __init__(self,balance):
        self.balance=balance
        self.min_withdraw=100
        self.max_withdrow=10000
    def get_balance(self):
        print(F"Your Balance Now : {self.balance}")
    def deposite(self,amount):
        if amount>0:
            self.balance+=amount
        else:
            print("Ammount is Negetive to deposite")
            exit()

    def withdeaw(self,amount):
        if amount<self.min_withdraw:
            print(f"Imposiblw. you can not withdraw bellow {self.min_withdraw}")
        elif amount>self.max_withdrow:
            print(f"Besi diya laisos you can not withdraw more then {self.max_withdrow}")
        else:
            if amount>self.balance:
                print("Insuficient Balance")
            else:
                self.balance-=amount
                print(f"Here is your money {amount}")
                print(F"After Withdraw Your Balance Now : {self.balance}")

Brac=bank(400)
Brac.deposite(-200)
Brac.withdeaw(100)
# Brac.get_balance()
# Brac.deposite(2)
# Brac.get_balance()


