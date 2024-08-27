# str='gfgfgh'
# for char in str:
#     print(char,end=" ")
# print()
# str3='jhg'
# for i in str3:
#     print(f"this is string: {i} and ist type {type(i)}")

# for i in range(len(str3)):
#     print(str3[i],end=" ")

# for i,val in enumerate(str3):
#     print(f"index: {i} val :{val}")
# num=5
# num2=2
# print(num2**4)
# i=7
# while(i<=20):
#     print(i)
#     i+=1

# def lol(q,s,r=11):
#     return [q*s,q+s+r]

# res=lol(2,3,2)
# print(res)

def lol(name,*args):
    sum=0
    for i in args:
        sum+=i
    return sum,name

lev=lol("fygvf",8,8,00,5)
print(lev)
def sqr(s):
    return s**2
lil=sqr(3)
print(lil)