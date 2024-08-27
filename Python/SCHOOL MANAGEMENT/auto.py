import pyautogui as me
import time
inp = int(input("ok"))
ms = input("msg")
i=0
time.sleep(5)
while(i < inp):
    me.typewrite(ms)
    me.press('enter')
    i+=1

