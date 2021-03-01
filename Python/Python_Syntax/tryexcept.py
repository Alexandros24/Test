import pyautogui

try:
    while True:
        pyautogui.position()
except KeyboardInterrupt:
    print('\noof')
pass