def bale(S):
    cnt_r=0
    cnt_l=0
    blc_str=[]
    for char in S:
        if char=='R':
            cnt_r+=1
        else:
            cnt_l+=1
        if cnt_l==cnt_r:
            blc_str.append(S[:cnt_r+cnt_l])
            S=S[cnt_r+cnt_l:] 
            cnt_l=0
            cnt_r=0
    return blc_str   

S=str(input())
balenced_s=bale(S)
print(len(balenced_s))
for strings in balenced_s:
    print(strings)