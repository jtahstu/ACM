# http://www.acmsearch.com/article/index?sort=-Fid&page=2

import urllib2
import re
import sys

def getList(page):
	for i in xrange(1,page):
		url = 'http://www.acmsearch.com/article/index?sort=-Fid&page='+str(i)
		headers = { 'User-Agent' : 'Mozilla/4.0 (compatible; MSIE 5.5; Windows NT)' }
		try:
			request = urllib2.Request(url,headers = headers)
			response = urllib2.urlopen(request)
			content = response.read()
			
			# print content
			patten=re.compile('.*?data-key="(.*?)"><td>(.*?)</td><td>(.*?)</td><td><a href="(.*?)" title=".*?">(.*?)</a>.*?">(.*?)</a></td><td>(.*?)</td>',re.S)
			proList=re.findall(patten,content)
			noproblem=re.search('敬请期待',res[4])
			if not noproblem:
				csv=open('acmSearchList.csv','ab+')
				for res in proList:
					acmlink='http://www.acmsearch.com/article/show/'+res[0]
					link=getLink(acmlink)
					data='"'+res[0]+'","'+res[1]+'","'+res[2]+'","'+res[3]+'","'+res[4]+'","'+res[5]+'","'+res[6]+'","'+link+'"'
					csv.write(data+"\r\n")
					print data
				csv.close()
		except urllib2.URLError, e:
		   if hasattr(e,"code"):
		       print e.code
		   if hasattr(e,"reason"):
		       print e.reason
		
def getLink(acmlink):
			request = urllib2.Request(acmlink)
			response = urllib2.urlopen(request)
			content = response.read()
			patten=re.compile('原文链接：<a href="(.*?)" title=".*?target="_blank">',re.S)
			link=re.search(patten,content)
			# print link.group()
			return link.group(1)

getList(1462)