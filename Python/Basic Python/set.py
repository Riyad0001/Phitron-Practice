lis=[7,99,87,8,99,87,54,76,23,7]
print(lis)
uni=set(lis)
print(uni)
uni.add(69)
print(uni)
uni.remove(99)
print(uni)
for nam in uni:
    print(nam)
A={5,7,9,7,5}
B={6,8,7,4}
print(A&B)
print(A|B)