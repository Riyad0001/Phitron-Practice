import pyautogui
N=int(input())
pyautogui.sleep(2)
for i in range(0,N+1):
    for j in range(0,i):
        pyautogui.write('#')
    pyautogui.press('enter')