def lo(w):
    return w[::-1]

fi=str(input())
words=fi.split()
for i,word in enumerate(words):
    print(lo(word),end="")
    if i<len(words)-1:
        print(" ",end="")