import urllib2

# urlopen(url, data, timeout)
request = urllib2.Request("http://www.baidu.com")
response = urllib2.urlopen(request)
# response = urllib2.urlopen("http://183.167.205.82:8081/JudgeOnline/status")
print response.read()