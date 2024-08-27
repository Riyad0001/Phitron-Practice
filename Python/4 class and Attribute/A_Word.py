l=input()
upper_count=0
for char in l:
    if char.isupper():
        upper_count+=1
lower_count=len(l)-upper_count

if upper_count>lower_count:
    print(l.upper())
else:
    print(l.lower())

