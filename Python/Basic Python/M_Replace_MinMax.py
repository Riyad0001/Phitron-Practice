N = int(input())
A = list(map(int, input().split()))
nin_num=min(A)
max_num=max(A)
min_ind=A.index(nin_num)
max_index=A.index(max_num)
A[min_ind],A[max_index]=A[max_index],A[min_ind]
print(*A)