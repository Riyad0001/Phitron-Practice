# # def double(x):
# #     return x*2
# double=lambda num: num*2
# dak=double(4)
# print(dak)

# add=lambda x,y: x+y
# sum=add(5,6)
# print(sum)

# num=[5,8,99,77,64,85]
# # dou=map(double,num)
# # print(list(dou))
# trip=map(lambda x:x**3,num)
# print(list(trip))


actors=[
    {'name':'SunnY leon','age':22},
    {'name':'fuck leon','age':272},
    {'name':'Mia Khalifa','age':42},
    {'name':'Vika borja','age':32},
    {'name':'Mia malkova','age':50}
]
juniors=filter(lambda non:non['age']<50,actors)
print(list(juniors))
fak=filter(lambda non:non['age']%5==0,actors)
print(list(fak))

