# class Exam:
#     def __init__(self,Student_name):
#         self.Student_name=Student_name
#         self.Fail_mark=33
#         self.Golden_ma=80

#     def add(self,Mark):
#         if Mark<self.Fail_mark:
#             print(F"You Fail.Your Mark less Then {self.Fail_mark}")
#         elif: Mark>self.Fail_mark
class A:
    def __init__(self, value):
        value = 3
        self.value = value

    def change(self):
        self.value = 12


ans = []
a = A(13)
ans.append(a.value)
a.change()
ans.append(a.value)
print(ans)