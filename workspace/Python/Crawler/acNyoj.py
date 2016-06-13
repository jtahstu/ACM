# -*- coding: utf-8 -*-
import urllib
import urllib2

import demjson


def getCode():
    jsonfile = open('nyojaccode.json', 'r')
    json = jsonfile.read()
    data = demjson.decode(json)
    return data['RECORDS']


proCount = 10
data = getCode()
x = 0
for i in data:
    x = x + 1
    if x > 2:
        break
    url = 'http://acm.nyist.net/JudgeOnline/submit.php?pid=' + str(i["pid"])
    headers = { 'PHPSESSID' : 'dbe7e3dfe64183133f160d5a2d3f37a9' }
    # values = {'btn_submit':'提交', 'language':'C/C++'}
    values = {}
    values['btn_submit'] = '提交'
    values['code'] = i['code']
    values['language'] = 'C/C++'
    data = urllib.urlencode(values)
    try:
        request = urllib2.Request(url, headers=headers)
        response = urllib2.urlopen(request, data, 10)
        content = response.read()
        print content
    except urllib2.URLError, e:
        if hasattr(e, "code"):
            print e.code
        if hasattr(e, "reason"):
            print e.reason
    


