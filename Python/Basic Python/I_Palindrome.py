N=input()
def fun(n):
    reve_n=str(int(n))[: : -1]
    return reve_n.lstrip('0')

rev=fun(N)
print(rev)
if N==N[::-1]:
    print("YES")
else:
    print()

