#Eve Richardson Time of day Python

import time

#print(time.gmtime(0)) 
#getting the very first instance of time

current = time.time()
#time in seconds since gmtime

#current time as we are used to seeing it
now = time.ctime(current)
print(now)

#get just the hour
local_time = time.localtime(current)
print(local_time)
minutes = local_time.tm_min
print(minutes)
hours = local_time.tm_hour
print(hours)