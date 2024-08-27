N = int(input())
A = list(map(int, input().split()))
Dic = {}

for i in A:
    Dic[i] = Dic.get(i, 0) + 1

answer = 0
for key, value in Dic.items():
    if value >= key:
        answer += value - key
    else:
        answer += value

print(answer)
