import pyautogui, time

text = "ante gamisou"
time.sleep(4)
for words in text:
    pyautogui.typewrite(words)
    
