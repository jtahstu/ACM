# import time;

# localtime = time.localtime(time.time())
# print "Local current time :", localtime
# print localtime[0]

import time

#获取当前时间
print time.strftime('%Y-%m-%d %H:%M:%S',time.localtime(time.time()))
    
#获取当前时间
print time.strftime('%Y-%m-%d',time.localtime(time.time()))

