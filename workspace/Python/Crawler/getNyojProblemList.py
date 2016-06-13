import urllib2
import re
import sys

page=13
for i in xrange(1,page):
	url = 'http://acm.nyist.net/JudgeOnline/problemset.php?page='+str(i)
	headers = { 'User-Agent' : 'Mozilla/4.0 (compatible; MSIE 5.5; Windows NT)' }
	try:
		request = urllib2.Request(url,headers = headers)
		response = urllib2.urlopen(request)
		content = response.read()
		# print content
		patten=re.compile('<TR.*?<TD>.*?<TD>(.*?)</TD>.*?<TD>(.*?)</TD>.*?probname tal.*?<a.*?">(.*?)</a>.*?<TD width="55" >(.*?) %</TD>.*?tal">\((.*?)/(.*?)\)</TD>',re.S)
		proList=re.findall(patten,content)
		# 0	题号
		# 1	难度
		# 2	标题
		# 3	AC率
		# 4	总AC次数
		# 5 总提交次数
		csv=open('naojproblem.csv','ab+')
		for res in proList:
			data='"'+res[0]+'","'+res[1]+'","'+res[2]+'","'+res[3]+'","'+res[4]+'","'+res[5]+'"'
			csv.write(data+"\r\n")
			print data
		csv.close()
	except urllib2.URLError, e:
	   if hasattr(e,"code"):
	       print e.code
	   if hasattr(e,"reason"):
	       print e.reason