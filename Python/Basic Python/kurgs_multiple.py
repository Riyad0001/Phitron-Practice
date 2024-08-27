def full(first,last,**add):
    name=f'{last} {first}'
    for ki,value in add.items():
        print(ki,value)
    return name


nam=full(first='Riyad',last='Ryaan',tit1='fak',tit2='texi')
print(nam)