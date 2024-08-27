class Man:
    def __init__(self,name,age,weigt):
        self.name=name
        self.age=age
        self.weigt=weigt

    def eat(self):
        print("Man eat rice")
    def excer(self):
        raise NotImplementedError
class Cricketer(Man):
    def __init__(self,name,age,weigt,nation):
        self.nation=nation
        super().__init__(name,age,weigt)
    def eat(self):
        print("Cricketer eat Vagitable")
    def excer(self):
        print("swming Ec")
    def __add__(self,other):
        return self.age+other.age
    def __mul__(self,other):
        return self.weigt*other.weigt
    def __len__(self):
        return self.age
    def __gt__(self,other):
        return self.age>other.age
    

sakib=Cricketer("Sakib al",37,58,"Bd")
# sakib.eat()
# sakib.excer()
musi=Cricketer("Tamim",34,55,'Bd')
print(sakib+musi)
print(sakib*musi)
print(len(sakib))
print(sakib>musi)