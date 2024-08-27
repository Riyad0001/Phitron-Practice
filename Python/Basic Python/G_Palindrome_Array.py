N = int(input())
A = list(map(int, input().split()))
rev=A[::-1]
if rev==A:
    print('YES')
else:
    print('NO')