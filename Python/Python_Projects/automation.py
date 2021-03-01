import pyautogui
import time as tm
import datetime
from datetime import datetime as date


pyautogui.FAILSAFE = True

def alert():
    pyautogui.confirm("kleise to mathima se 5 sec", "teleiose i ora", buttons=[OK, CLOSE SUBJ])
    

bell = tm.localtime() #I used time module because of built in funciton to take hours and seconds easier(I know it better)
day_name = date.today().strftime("%A") #prints day name!!!

print(bell, day_name)

try:
    while(True):
        if (bell.tm_hour == 8 and bell.tm_min == 50):
            print (f'Today is {day_name} and the first hour is done')
            bell = tm.localtime()
            tm.sleep(600)
            break
        ###########here starts the condition that we are in a school day###########
    if (day_name == 'Monday'):
        elif (bell.tm_hour == 9 and bell.tm_min == 40):
            print (f'Today is {day_name} and the second hour is done')
            bell = tm.localtime()
            tm.sleep(600)
        elif (bell.tm_hour == 10 and bell.tm_min == 30):
            print (f'Today is {day_name} and the third hour is done')
            bell = tm.localtime()
            tm.sleep(600)
        elif (bell.tm_hour == 11 and bell.tm_min == 35):
            print (f'Today is {day_name} and the fourth hour is done')
            bell = tm.localtime()
            tm.sleep(600)
        elif (bell.tm_hour == 12 and bell.tm_min == 25):
            print (f'Today is {day_name} and the fifth hour is done')
            bell = tm.localtime()
            tm.sleep(600)
        elif (bell.tm_hour == 13 and bell.tm_min == 15):
            print (f'Today is {day_name} and the sixth hour is done')
            bell = tm.localtime()
            tm.sleep(600)
        elif (bell.tm_hour == 14 and bell.tm_min == 5):
            print (f'Today is {day_name} and the seventh hour is done') 
            bell = tm.localtime()
            tm.sleep(600)
        elif (bell.tm_hour == 14 and bell.tm_min == 55):
            print (f'Today is {day_name} and the eighth hour is done')
            bell = tm.localtime()
            tm.sleep(600)
    elif (day_name == 'Tuesday' or day_name == 'Wednesday' or day_name == 'Thursday' or day_name == 'Friday'):
        elif (bell.tm_hour == 9 and bell.tm_min == 40):
            print (f'Today is {day_name} and the second hour is done')
            bell = tm.localtime()
            tm.sleep(600)
        elif (bell.tm_hour == 10 and bell.tm_min == 30):
            print (f'Today is {day_name} and the third hour is done')
            bell = tm.localtime()
            tm.sleep(600)
        elif (bell.tm_hour == 11 and bell.tm_min == 35):
            print (f'Today is {day_name} and the fourth hour is done')
            bell = tm.localtime()
            tm.sleep(600)
        elif (bell.tm_hour == 12 and bell.tm_min == 25):
            print (f'Today is {day_name} and the fifth hour is done')
            bell = tm.localtime()
            tm.sleep(600)
        elif (bell.tm_hour == 13 and bell.tm_min == 15):
            print (f'Today is {day_name} and the sixth hour is done')
            bell = tm.localtime()
            tm.sleep(600)
except KeyboardInterrupt:
    print('finito')
else:
    print('something happened')
