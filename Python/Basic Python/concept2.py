# from Concept_prac import *
# des=lol("fvfvg",7,8,9,0,6)
# print(des)
# des2=sqr(5)
# print(des2)
# listn=[[i,i**2] for i in range(1,20) if i%2==1 if i**2<50]
# print(listn)
# print(type(listn))
# num=[]
# for i in range(3):
#     for j in range(3):
#         num.append([i,j])
# print(num)

# new_listn=[[i,j] for i in range(3) for j in range(3)]
# print(new_listn)
# r="Rahim"
# r=list(r)
# r[0]='K'
# r="".join(r)
# print(r)

# lis=[1,1,1,3,4,5,3,6,4,7,8]
# dicti={i:lis.count(i) for i in lis}
# print(dicti)
# lis=[1,2,4,5,7,12,77]

# dick=[j for i,j in enumerate(lis) if j<7]
# print(dick)

# d1={'Rahim':10,"Karim":20,"Labu":5}
# d2={"Rahim":5,"Karim":3,"Ria":6}

# for key,value in d2.items():
#     d1[key]=d1.get(key,0)+value
# print(d1)

# lis=[1,2,3,4,5,6,7,8]

# m=list(filter(lambda x:x%2==0,lis))
# print(m)

# v=8
# is_even=lambda val:val%2==0

# print(is_even(v))


# try:
#     m=int(input())
#     n=int(input())
#     r=m/n
#     print(r)
# except ZeroDivisionError:
#     print("Divison By Zero is not Posible")
# except ValueError:
#     print("Wrong Input")
# finally:
#     print("End")

def lik(**kwargs):
    for key,value in kwargs.items():
        print(key," :",value)

man=lik(name="Riyad",age=22,From="Dhaka")

