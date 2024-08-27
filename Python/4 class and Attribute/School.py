class Student:
    def __init__(self,name,cur_class,roll):
        self.name=name
        self.cur_class=cur_class
        self.roll=roll

    def __repr__(self) -> str:
        return f'Student Name : {self.name} her roll: {self.roll} class: {self.cur_class}'

class Teacher:
    def __init__(self,name,subject,id):
        self.name=name
        self.subject=subject
        self.id=id

    def __repr__(self) -> str:
        return f"Teacher name : {self.name} Subject : {self.subject} id : {self.id}"

class School:
    def __init__(self,name):
        self.name=name
        self.teachers=[]
        self.students=[]

    def add_teacher(self,name,subject):
        id=len(self.teachers)+101
        teacher=Teacher(name,subject,id)
        self.teachers.append(teacher)
    def enroll(self,fee,name):
        if fee<6500:
            return 'Not enough Fee'

        else:
            id=len(self.students)+1
            student=Student(name,'SSC',id)
            self.students.append(student)
            return f"{name} is enrollesd with id : {id},extra money {fee-6500}"
    def __repr__(self) -> str:
        print('Welcome to',self.name)
        print("-----Our TEachers---")
        for teacher in self.teachers:
            print(teacher)
        print("-------Our Students------")
        for stu in self.students:
            print(stu)
        return f'All Done for NOw'



# alia=Student("Alia Torkari",9,3)
# print(alia)
# dad=Teacher("Golam Mostofa","Biology",12)
# print(dad)

SPBLS=School("SPBL School")
SPBLS.enroll(4000,'Riyad')
SPBLS.enroll(7000,'Siyad')
SPBLS.enroll(10000,'DE COck')
SPBLS.enroll(9000,'Virat')
SPBLS.enroll(90000,'Pathirana')

SPBLS.add_teacher("Mustofa",'Biology')
SPBLS.add_teacher("Nasir",'Math')
SPBLS.add_teacher("Sirin",'Somaj')
SPBLS.add_teacher("Aklima",'ICT')

print(SPBLS)