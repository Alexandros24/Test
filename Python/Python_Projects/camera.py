import pyautogui, time

while(True):
    time.sleep(150)
    pyautogui.keyDown('alt')
    pyautogui.press('e')
    pyautogui.keyUp('alt')
