# def mak(s,t):
#     sum=s+t
#     return sum
# fak=mak(int(input()),int(input()))
# print(fak)

def bal(*args):
    sum=0
    for num in args:
            sum+=num
    return sum

make=bal(5,3,4,5,6)
print(make)