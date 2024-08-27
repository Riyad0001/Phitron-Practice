keY_valu_pair={'Name':'Riayd','Age':22,'addres':'Shipaipara','job':'Facebooker'}
print(keY_valu_pair)
print(keY_valu_pair['Name'])
print(keY_valu_pair.keys())
print(keY_valu_pair.values())
keY_valu_pair['Sex']='Male'
print(keY_valu_pair)
keY_valu_pair['Name']='Sada Pakhi'
print(keY_valu_pair)
del keY_valu_pair['job']
print(keY_valu_pair)

for key,value in keY_valu_pair.items():
    print(key,value)

#Extra
lis=[7,99,87,8,99,87,54,76,23,7]

for i,val in enumerate(lis):
    print(i,val)