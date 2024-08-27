from school import School
from person import Person,Teacher,Student
from subject import Subject
from classroom import Classroom

scool=School("SPBLS",'Tetulia')
##adding classroom
eight=Classroom("Eight")
nine=Classroom("Nine")
ten=Classroom("Ten")

scool.add_classroom(eight)
scool.add_classroom(nine)
scool.add_classroom(ten)
##adding student
rahim=Student("Rahim",eight)
kahim=Student("Kahim",nine)
aahim=Student("Aahim",ten)
tahim=Student("Tahim",ten)

scool.student_admission(rahim)
scool.student_admission(kahim)
scool.student_admission(aahim)
scool.student_admission(tahim)

#adding teacher
modul=Teacher("modul sir")
bodul=Teacher("bodul sir")
rodul=Teacher("rodul sir")

#adding subject
bangla=Subject("Bangla",modul)
eng=Subject("English",bodul)
ict=Subject("ICT",rodul)
math=Subject("Math",rodul)

eight.add_subject(ict)
eight.add_subject(eng)
eight.add_subject(bangla)
nine.add_subject(math)
nine.add_subject(ict)
nine.add_subject(bangla)
ten.add_subject(ict)
ten.add_subject(eng)
ten.add_subject(bangla)
ten.add_subject(math)

eight.take_semester_final()
nine.take_semester_final()
ten.take_semester_final()
print(scool)