class School:
    def __init__(self,name,address):
        self.name=name
        self.address=address
        self.teachers={} #b{'bangla',teacher_object}
        self.classrooms={}

    def add_classroom(self,classroom):
        self.classrooms[classroom.name]=classroom

    def add_teacher(self,subject,teacher):
        self.teachers[subject]=teacher

    def student_admission(self,student):
        classname=student.classroom.name
        self.classrooms[classname].add_student(student)
    @staticmethod
    def calculate_grade(mark):
        if mark>=80 and mark<=100:
            return 'A+'
        elif mark>=70 and mark<80:
            return 'A'
        elif mark>=60 and mark<70:
            return 'A-'
        elif mark>=50 and mark<60:
            return 'B'
        elif mark>=40 and mark<50:
            return 'C'
        elif mark>=33 and mark<40:
            return 'D'
        else:
            return 'F'

    @staticmethod
    def grade_to_point(grade):
        grade_map={
            'A+':5.00,
            'A' :4.50,
            'A-':4.00,
            'B' :3.00,
            'C' :2.00,
            'D' :1.00,
            'F' :0.00
        }
        return grade_map[grade]

    @staticmethod
    def point_to_grade(value):
        if value>=4.50 and value<5.00:
            return 'A+'
        elif value>=4.00 and value<4.50:
            return 'A'
        elif value>=3.50 and value<4.00:
            return 'A-'
        elif value>=3 and value<3.50:
            return 'B'
        elif value>=2.00 and value<3.00:
            return 'C'
        elif value>=1.00 and value<2.00:
            return 'D'
        else:
            return 'F'
    
    def __repr__(self):
        #All callasroom
        print("All Students")
        result=''
        for key,value in self.classrooms.items():
            result +=f"---{key.upper()} Classroom Students\n"
            for student in value.students:
                result +=f"{student.name}\n"
        print(result)
        subject=''
        for key,value in self.classrooms.items():
            subject +=f"---{key.upper()} Classroom Subject\n"
            for sub in value.students:
                result +=f"{sub.name}\n"
        print(subject)

        print("Student Result")
        for key,value in self.classrooms.items():
            for student in value.students:
                for k,i in student.marks.items():
                    print(student.name,k,i,student.subject_grade[k])
                print(student.final_grade())
        return ''
        #all Stu
        #all sub
        #all tech
        #all stu res
        
