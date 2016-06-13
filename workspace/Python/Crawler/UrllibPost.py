import urllib
import urllib2

values = {"user_id1":"1881130888","password1":"9748641741","B1":"login"}
data = urllib.urlencode(values) 
url = "http://183.167.205.82:8081/JudgeOnline/login?action=login"
request = urllib2.Request(url,data)
response = urllib2.urlopen(request)
print response.read()

# <html><head><meta http-equiv="Pragma" content="no-cache"><title>Login</title></head><body bgcolor=#F1F1FD link=blue alink=blue vlink=blue>Welcome<br><b>1881130888</b>
# <a href=login?action=logout>Log Out</a><br><a href=mail target=_parent><font color=blue>Mail:0(<b>0</b>)</font></a></body></html>
# [Finished in 0.1s]