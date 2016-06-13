import urllib2
import re
import sys
import time

pid=1247
for i in xrange(1,pid):
	url = 'http://acm.nyist.net/JudgeOnline/problem.php?pid='+str(i)
	headers = { 'User-Agent' : 'Mozilla/4.0 (compatible; MSIE 5.5; Windows NT)' }
	try:
		request = urllib2.Request(url,headers = headers)
		response = urllib2.urlopen(request)
		content = response.read()
		noproblem=re.search('题目尚未公开',content)
		if not noproblem:
			patten=re.compile('.*?class="problem-display".*?</H4>(.*?)<DL class="problem-submit">',re.S)
			proList=re.findall(patten,content)
			csv=open('nyojproblemlist.csv','ab+')
			for res in proList:
				data='"'+str(i)+'","'+res+'"'
				csv.write(data+"\r\n")
				print data
			csv.close()
	except urllib2.URLError, e:
	   if hasattr(e,"code"):
	       print e.code
	   if hasattr(e,"reason"):
	       print e.reason
	time.sleep(1)