from abc import ABC,abstractmethod
class Animal(ABC):
    @abstractmethod
    def eat(self):
        print('I nEEd food')
    @abstractmethod
    def move(self):
        pass
class Cat(Animal):
    def __init__(self,name):
        self.name=name
        self.catagory="cat"
        super().__init__()
    def eat(self):
        print('I Like food')
    def move(self):
        print("Nothing")
laki=Cat('Luck')
laki.eat()
laki.move()