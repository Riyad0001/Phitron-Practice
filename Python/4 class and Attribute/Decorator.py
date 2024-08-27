import math
import time
def timeri(func):
    def inner(*args,**kargs):
        print('Time starter')
        start=time.time()
        func(*args,**kargs)
        print('Time ended')
        end=time.time()
        print(f"Total Time taken {end-start}")
    return inner

# timeri()()
@timeri
def fect(n):
    print('Factorial starte')
    result=math.factorial(n)
    print(f"Factorial of {n} is {result}")

fect(n=14)