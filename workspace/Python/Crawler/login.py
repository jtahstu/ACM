__author__ = 'jtahstu'
# -*- coding:utf-8 -*-

import urllib
import urllib2
import cookielib
import re

#山东大学绩点运算
class SDU:

    def __init__(self):
        self.loginUrl = 'http://211.70.49.127/%28t1uqgozy00xspfbosx4qfwva%29/default2.aspx'
        self.cookies = cookielib.CookieJar()
        self.postdata = urllib.urlencode({
            'stuid':'201200131012',
            'pwd':'xxxxxx'
         })
        self.opener = urllib2.build_opener(urllib2.HTTPCookieProcessor(self.cookies))

    def getPage(self):
        request  = urllib2.Request(
            url = self.loginUrl,
            data = self.postdata)
        result = self.opener.open(request)
        #打印登录内容
        print result.read().decode('utf-8')


sdu = SDU()
sdu.getPage()