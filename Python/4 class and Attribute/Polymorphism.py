class Animal:
    def __init__(self,name):
        self.name=name
    def sound(self):
        print('Animal male sound')

class cat(Animal):
    def __init__(self,name):
        super().__init__(name)
    def sound(self):
        print('Meaw Meaw')
class dog(Animal):
    def __init__(self,name):
        super().__init__(name)
    def sound(self):
        print('Ghew Ghew')

don=cat('Real don')
don.sound()
Shefard=dog('Jarman Sefard')
Shefard.sound()