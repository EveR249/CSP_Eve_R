#Eve Richardson Time of Day Python

import time

current = time.time()



now = time.ctime(current)



local_time = time.localtime(current)

minutes = local_time.tm_min

hours = local_time.tm_hour
