class Bank:
    def __init__(self,holder_name,initial_balance):
        self.holder_name=holder_name
        self.__ammount=initial_balance

    def deposite(self,tk):
        self.__ammount+=tk
    def get_balance(self):
        return self.__ammount
    def withdraw(self,tks):
        if self.__ammount<tks:
            self.__ammount=self.__ammount-tks
            return tks
        else:
            return f'Fokira tk nai'

rauf=Bank('Riyeddd',2000)
rauf.deposite(433)
rauf.__ammount=0
print(rauf.get_balance())
# print(dir(rauf))
print(rauf._Bank__ammount)