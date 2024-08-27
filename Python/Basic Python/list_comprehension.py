nums=[21,25,30,35,40,45,50,55]
# odds=[]
# for num in nums:
#     if num%2==1 and num%5==0:
#         odds.append(num)
# print(odds)
oddy=[num for num in nums if num%2==1 if num%5==0]
print(oddy)

player=['sakib','tamim','riyad']
age=[38,37,39]
age_combo=[]
for playe in player:
    print('Players: ',playe)
    for ages in age:
        print(playe,ages)
        age_combo.append([playe,ages])
print(age_combo)
age_combo2=[[playe,ages]for playe in player for ages in age]
print(age_combo2)

def display_person(**kwargs):
    for key,value in kwargs.items():
        print(f"{key}: {value}")


display_person(Name="Amir Khan", Age="45")
print(display_person)

numbers =[7,6,5,3,3,2,1]
print(numbers[-4])