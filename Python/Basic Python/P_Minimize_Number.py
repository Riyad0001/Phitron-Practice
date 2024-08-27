def evenn(lis):
    for i in lis:
        if i%2!=0:
            return False
    return True

N = int(input())
A = list(map(int, input().split()))
cnt=0
while evenn(A):
    A=[i/2 for i in A]
    cnt+=1
print(cnt)
