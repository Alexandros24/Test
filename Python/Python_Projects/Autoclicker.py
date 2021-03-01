import pyautogui, random, string

def get_random_string(length):
        letters = string.ascii_letters
        result_str = ''.join(random.choice(letters) for i in range(length))
        print("Random string is:", result_str)
get_random_string(8)

