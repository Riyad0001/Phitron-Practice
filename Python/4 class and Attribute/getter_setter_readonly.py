class User:
    def __init__(self,name,money,age):
        self._name=name
        self.__money=money
        self._age=age
    @property
    def mani(self):
        return self.__money
    @property
    def agei(self):
        return self._age
    @mani.setter
    def salary(self,value):
        if value<0:
            return f'Salary can not be negative'
        self.__money+=value

samsu=User("sam",300,22)
print(samsu.mani)
print(samsu.agei)
samsu.salary=100
print(samsu.salary)