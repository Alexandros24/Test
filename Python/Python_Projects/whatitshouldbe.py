import pyautogui, time

time.sleep(3)

text = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nam pharetra porttitor nisl non aliquam. Nulla ullamcorper lacus justo, id semper mauris aliquet quis. Morbi eleifend quam vitae nisi convallis, sit amet lobortis ex laoreet. Donec nulla felis, ultricies viverra interdum quis, consequat id diam. Nullam tristique fermentum nibh, quis commodo ante placerat id. Curabitur eget eros egestas metus tempor dapibus. Quisque sodales iaculis convallis. Cras sit amet facilisis orci, ut vulputate libero. Nam et finibus leo. Cras tempor sagittis metus sed ultricies. Praesent sollicitudin consectetur mi, et sagittis velit interdum posuere. Donec id dolor varius, egestas est sit amet, rutrum est. Fusce orci nunc, feugiat in augue id, hendrerit pellentesque tellus. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Nulla maximus non turpis in consequat. Suspendisse a dictum felis, nec ultrices nisi. Maecenas placerat viverra urna ac malesuada. Proin varius aliquet aliquam. Praesent purus enim, sollicitudin nec efficitur eget, commodo a eros. Pellentesque sed orci at quam ultricies vulputate id in libero. Nam ultrices orci eget accumsan congue. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia curae; In vehicula justo vitae arcu pellentesque tempor. Morbi eget libero eu augue porta pellentesque in ut leo. Integer non leo non enim posuere pellentesque in sit amet mauris. Pellentesque sagittis at lorem vel ornare. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean et consequat augue. Aenean pellentesque auctor aliquam."
pyautogui.PAUSE = 0.003


charList = [i for i in text]

for char in charList:
    pyautogui.typewrite(char)