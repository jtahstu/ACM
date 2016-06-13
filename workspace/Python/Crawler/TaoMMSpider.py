__author__ = 'jtahstu'

import os
import re
import urllib
import urllib2


# 获取索引页面的内容
def getPage(pageIndex):
	url = "https://mm.taobao.com/json/request_top_list.htm?page=" + str(pageIndex)
	headers = { 
				'User-Agent' : 'Mozilla/5.0 (Windows NT 6.1; WOW64; rv:45.0) Gecko/20100101 Firefox/45.0' ,
				'Host' : 'img.alicdn.com',
				'JSESSIONID' : '1EE456EF1E3BFC995C6E5481B8D195BC',
				'referer' : 'https://mm.taobao.com/json/request_top_list.htm?page=1'
				
			  }
	request = urllib2.Request(url, headers=headers)
	response = urllib2.urlopen(request)
	return response.read()

# 获取索引界面所有MM的信息，list格式
def getContents(pageIndex):
        page = getPage(pageIndex)
        pattern = re.compile('<div class="list-item".*?pic-word.*?<a href="(.*?)".*?<img src="(.*?)".*?<a class="lady-name.*?>(.*?)</a>.*?<strong>(.*?)</strong>.*?<span>(.*?)</span>', re.S)
        items = re.findall(pattern, page)
        contents = []
        for item in items:
            contents.append([item[0], item[1], item[2], item[3], item[4]])
        return contents
		# ['//mm.taobao.com/687471686.htm', '//gtd.alicdn.com/sns_logo/i3/TB1MYDnMXXXXXbSXpXXwu0bFXXX.png_60x60.jpg', '\xcc\xef\xe6\xc2\xe6\xc2', '26', '\xb9\xe3\xd6\xdd\xca\xd0']

 # 获取MM个人详情页面
def getDetailPage(infoURL):
	response = urllib2.urlopen(infoURL)
	return response.read()

# 获取页面所有图片
def getAllImg(page):
        pattern = re.compile('.*?"mm-aixiu-content".*?>(.*?)</div>', re.S)
        # 个人信息页面所有代码
        content = re.search(pattern, page)
        print content
        # 从代码中提取图片
        patternImg = re.compile('.*?<img.*?src="(.*?)"', re.S)
        images = re.findall(patternImg, content.group(1))
        return images


# 保存多张写真图片
def saveImgs(images, name):
        number = 1
        print u"发现", name, u"共有", len(images), u"张照片"
        for imageURL in images:
            splitPath = imageURL.split('.')
            fTail = splitPath.pop()
            if len(fTail) > 3:
                fTail = "jpg"
            fileName = name + "/" + str(number) + "." + fTail
            saveImg(imageURL, fileName)
            number += 1


# contents=getContents(1)
# mmpage=getDetailPage(contents[0])
# images=getAllImg(mmpage)
# saveImgs(images,name=contents[2])
page = getDetailPage('https://mm.taobao.com/687471686.htm')
print page
print getAllImg(page)
# saveImgs()
