#Eve Richardson Time of Day Python

import time

current = time.time()
now = time.ctime(current)
local_time = time.localtime(current)
hours = local_time.tm_hour

if hours <= 11:
    print("Good morning!\n")
elif hours <= 15:
    print("Good afternoon!\n")
else:
    print("Good evening!\n")