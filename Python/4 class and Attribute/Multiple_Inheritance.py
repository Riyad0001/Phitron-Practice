class Family:
    def __init__(self,address):
        self.address=address

class Sports:
    def __init__(self,game):
        self.game=game
class school:
    def __init__(self,id,level):
        self.id=id
        self.level=level
class Student(Family,Sports,school):
    def __init__(self,address,id,level,game):
        Family.__init__(self,address)
        school.__init__(self,id,level)
        Sports.__init__(self,game)


