# -*- coding: UTF-8 -*- 
'''
    Script Name   : BaiduSpider
    Author        : 石头(winipcss@outlook.com)
    Created       : 2015.6.2
    Description   : 1. 资源 http://pan.baidu.com/share/homerecord?uk="+str(i[0])+"&page=1&pagelength=60
                  : 2. 粉丝 http://pan.baidu.com/pcloud/friend/getfollowlist?query_uk="+str(uk)+"&limit=24&start="+str(start)+"&bdstoken=null&channel=chunlei&clienttype=0&web=1
                  : 3. 订阅 http://pan.baidu.com/pcloud/friend/getfollowlist?query_uk="+str(uk)+"&limit=24&start=0&bdstoken=null&channel=chunlei&clienttype=0&web=1
'''

from scrapy.spider import Spider
from scrapy.selector import HtmlXPathSelector, Selector
from dirbot.items import Website
from scrapy.contrib.spiders import CrawlSpider, Rule

import time
import os
import json
import re
import string
from scrapy.http import Request
import random

import MySQLdb

#define varible
global fans_uks, subscribe_uks,level,remote_sql,parse_sql, Lupdate, Linsert
fans_uks=subscribe_uks = parse_sql = remote_sql = []
Linsert = []
Lupdate = []
global proxy_num
proxy_num = 0
global getResource, getPage, getUks, getPage, number, level_num,randId, num, On_Level_Num, On_Fans_Num, global_num,loop_num
getResource=getPage=getUks=getPage=number=num=On_Fans_Num=On_Level_Num = global_num=loop_num= 0
global update
level_num=0
update = 1
randId = str(random.randint(1,999999))
level = randId+'#'+str(level_num)
global Gtotal_count,Gtotal_fans
Gtotal_count = 0
Gtotal_fans = 0
global byield
byield = 1
class DmozSpider(Spider):

    conn=MySQLdb.connect(host='127.0.0.1',user='root',passwd='',db='baidu',port=3306,charset='utf8')
    cursor=conn.cursor()

    conn_remote=MySQLdb.connect(host='558b989f6388a.sh.cdb.myqcloud.com',user='cdb_outerroot',passwd='shicuiliang147',db='baidutemp',port=7816,charset='utf8')
    cursor_remote=conn_remote.cursor()

    # conn_remote=MySQLdb.connect(host='rds628e52zp0ena97s82.mysql.rds.aliyuncs.com',user='baidu_root',passwd='19941130shi',db='baidu',port=3306,charset='utf8')
    # cursor_remote=conn_remote.cursor()

    name = "dmoz"
    allowed_domains = ["pan.baidu.com"]

    def seeds():
        # control start table
        global table,randId,level,level_num
        conn_remote=MySQLdb.connect(host='558b989f6388a.sh.cdb.myqcloud.com',user='cdb_outerroot',passwd='shicuiliang147',db='baidutemp',port=7816,charset='utf8')
        cursor_remote=conn_remote.cursor()
        count_sql ="show tables;"
        count = cursor_remote.execute(count_sql)
        fetch = cursor_remote.fetchone()
        tablename = fetch[len(fetch)-1]
        table = int(tablename[5:])
        # end

        conn=MySQLdb.connect(host='127.0.0.1',user='root',passwd='',db='baidu',port=3306,charset='utf8')
        cursor=conn.cursor()
        cursor.execute("SELECT * from uk where level ="+str(level))
        if cursor.fetchone():
            randId = str(random.randint(1,999999))
            level = randId+'#'+str(level_num)
        url_list = []
        test = []
        cursor.execute("select uk from seeds where used=0")
        fetch = cursor.fetchall()
        test.append("http://pan.baidu.com/share/homerecord?uk="+str(fetch[0][0])+"&page=1&pagelength=60")
        for i in fetch:
            url_list.append("http://pan.baidu.com/share/homerecord?uk="+str(i[0])+"&page=1&pagelength=60")
        return test

    start_urls = seeds()

    headers = {
        "Accept": "*/*",
        "Accept-Encoding": "gzip,deflate",
        "Accept-Language": "en-US,en;q=0.8,zh-TW;q=0.6,zh;q=0.4",
        "Connection": "keep-alive",
        "Content-Type":" application/x-www-form-urlencoded; charset=UTF-8",
        "User-Agent": "Mozilla/5.0 (Macintosh; Intel Mac OS X 10_10_1) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/38.0.2125.111 Safari/537.36",
        "Referer": "http://pan.baidu.com/"
    }

    proxy_ip = ""

    def parse(self, response):
        global getResource,getUks,getPage,number,table,remote_sql,uk_seeds
        seeds = 0
        url = response.url
        url_match = re.match('.*uk=(\d*)&page=(\d*)&', url)
        uk = url_match.group(1)
        page = url_match.group(2)
        print '================== UK:'+str(uk)+'========= PAGE:'+str(page)+'==============='
        try:
            response.meta['used']
            print "============ Not SEEDS! =====Response.Used"+str(response.meta['used'])+"============="
        except Exception, e:
            self.cursor.execute("UPDATE seeds SET used=1 WHERE uk="+str(uk))
            self.conn.commit()
            uk_seeds = uk
            seeds = 1
        else:
            pass
        finally:
            pass

        sql = "SELECT lastctime from uk where uk="+uk
        sql = sql.encode('utf-8')
        result = self.cursor.execute(sql)
        fetch = self.cursor.fetchone()
        lastctime = fetch[0]
        # print '=====lastctime:'+str(lastctime)

        if int(page)==1:
            global_last_ctime = lastctime

        resource_json = json.loads(response.body)
        try:
            json_list = resource_json['list']
        except Exception, e:
            json_list = []
        else:
            pass
        finally:
            pass
        getPage = 1
        if json_list!=[]:
            uk_num = 0
            last_num = 0

            for i in json_list:
                ctime = int(i['ctime'])
                last_num = last_num + 1

                if last_num==1 and int(page)==1:
                    global_last_ctime = ctime
                # print '____ctime'+str(ctime)+'_______lastctime'+str(lastctime)+'___result'+str(result)
                if result==0 or ctime > lastctime:
                    number = number + 1
                    title=i['typicalPath']
                    shareid = i['shareId']
                    fid = i['fsIds'][0]
                    types = i['typicalCategory']
                    shorturl = i['shorturl']
                    sqls1 = ""
                    sql = "(%d,\"%s\",%d,%d,%d,%d,\"%s\")"
                    params = (int(uk),title, int(shareid), int(fid), int(types), ctime, shorturl)
                    sqls1 = sqls1 + (sql % params) + ""
                    sql = sqls1.encode('utf-8')
                    remote_sql.append(sql);
                    remote_sql_len = len(remote_sql)
                    if remote_sql_len>=20:
                        remote_sql_st = ",".join(remote_sql)+";"
                        self.cursor_remote.execute("INSERT INTO `baidu"+str(table)+"`(`uk`,`title`, `shareid`, `fid`, `types`, `ctime`, `shorturl`) VALUES "+remote_sql_st)
                        self.conn_remote.commit()
                        remote_sql = []
                        # print '=================== INSERT List END ==========================='

                    uk_num = uk_num + 1

            print ' =====总资源：'+str(number)+'个 ==== 页内资源：'+str(last_num)+'('+str(uk_num)+')'

            if last_num>=60:
                page = int(page) + 1
                print '=============== NEXT PAGE =========='
                newurl = "http://pan.baidu.com/share/homerecord?uk="+str(uk)+"&page="+str(page)+"&pagelength=60"
                yield Request(newurl, meta={'used':2,'proxy':self.proxy_ip}, callback=self.parse)
            else:
                if uk==uk_seeds:
                    #^ new add parse uk
                    count_sql = "SELECT COUNT(*) FROM  `uk`  WHERE 1"
                    count_sql = count_sql.encode('utf-8')
                    count = self.cursor.execute(count_sql)
                    fetch = self.cursor.fetchall()
                    On_Level_Num = fetch[0][0]
                    level_uk_num = (int(On_Level_Num)/1000)+1
                    offset = 0
                    print '===============ENTER Parse ==========On_Level_Num:'+str(On_Level_Num)
                    while offset<=level_uk_num:
                        sql = "SELECT uk FROM uk WHERE 1 order by level limit 10000000000000 offset "+str(offset*1000)
                        sql = sql.encode('utf-8')
                        offset = offset + 1
                        count = self.cursor.execute(sql)
                        rows = self.cursor.fetchall()
                        for i in rows:
                            uk = i[0]
                            fans_newurl = "http://pan.baidu.com/share/homerecord?uk="+str(uk)+"&page=1&pagelength=60"
                            yield Request(fans_newurl, meta={'used':1,'proxy':self.proxy_ip}, callback=self.parse)
                    #$  new add end parse uk
                    print '==================END PARSE SEED => Turn to Fans=================='
                    fans_newurl = 'http://pan.baidu.com/pcloud/friend/getfanslist?query_uk='+str(uk)+'&limit=24&start=0&bdstoken=null&channel=chunlei&clienttype=0&web=1'
                    yield Request(fans_newurl, meta={'seeds':1,'proxy':self.proxy_ip}, headers=self.headers, callback=self.fans)
        else:
            if seeds==1:
                #^ new add parse uk
                count_sql = "SELECT COUNT(*) FROM  `uk`  WHERE 1"
                count_sql = count_sql.encode('utf-8')
                count = self.cursor.execute(count_sql)
                fetch = self.cursor.fetchall()
                On_Level_Num = fetch[0][0]
                level_uk_num = (int(On_Level_Num)/1000)+1
                offset = 0
                print '===============ENTER Parse ==========On_Level_Num:'+str(On_Level_Num)
                while offset<=level_uk_num:
                    sql = "SELECT uk FROM uk WHERE 1 order by level limit 10000000000000 offset "+str(offset*1000)
                    sql = sql.encode('utf-8')
                    offset = offset + 1
                    count = self.cursor.execute(sql)
                    rows = self.cursor.fetchall()
                    for i in rows:
                        uk = i[0]
                        fans_newurl = "http://pan.baidu.com/share/homerecord?uk="+str(uk)+"&page=1&pagelength=60"
                        yield Request(fans_newurl, meta={'used':1,'proxy':self.proxy_ip}, callback=self.parse)
                #$  new add end parse uk
                print '==================END PARSE SEED => Turn to Fans=================='
                fans_newurl = 'http://pan.baidu.com/pcloud/friend/getfanslist?query_uk='+str(uk)+'&limit=24&start=0&bdstoken=null&channel=chunlei&clienttype=0&web=1'
                yield Request(fans_newurl, meta={'seeds':seeds,'proxy':self.proxy_ip}, headers=self.headers, callback=self.fans)
        getPage = 0

        if int(page)==0:
            sql = "UPDATE uk SET lastctime="+str(global_last_ctime)+" where uk="+uk
            print '=============UPDATE LastCtime:'+sql+'============'
            sql = sql.encode('utf-8')
            self.cursor.execute(sql)

        if number>10000:
            self.cursor_remote.execute("SELECT COUNT(*) from `baidu"+str(table)+"` where 1")
            fetch = self.cursor_remote.fetchall()
            auto_increment = fetch[0][0]
            if auto_increment>=2000000:
                table = table+1;
                table_sql = "CREATE TABLE IF NOT EXISTS `baidu"+str(table)+"` (`id` int(11) NOT NULL AUTO_INCREMENT,`uk` bigint(20) NOT NULL DEFAULT '0',`title` varchar(255) DEFAULT NULL,`shareid` bigint(20) NOT NULL DEFAULT '0',`fid` bigint(20) NOT NULL DEFAULT '0',`types` int(10) NOT NULL DEFAULT '0',`ctime` int(10) NOT NULL DEFAULT '0',`shorturl` varchar(20) DEFAULT NULL,`size` int(20) NOT NULL DEFAULT '0',`dCnt` int(10) NOT NULL DEFAULT '0',`tCnt` int(10) NOT NULL DEFAULT '0',`vCnt` int(10) NOT NULL DEFAULT '0',`img` varchar(500) DEFAULT NULL,`used` int(2) NOT NULL DEFAULT '0',`endfix` int(2) NOT NULL DEFAULT '"+str(table)+"',PRIMARY KEY(`id`)) ENGINE=MyISAM DEFAULT CHARSET=utf8 AUTO_INCREMENT="+str(auto_increment+1)+";"
                self.cursor_remote.execute(table_sql)
                self.conn_remote.commit()
                number = 0
            print '=========Over Judge Number in parse========'

    def handleGlobal(self,response):
        global getResource,getUks,getPage,byield
        print '=======Entrace handleGlobal Function ====='
        print '====getResource:'+str(getResource)+'===getUks:'+str(getUks)+'====getPage:'+str(getPage)+'==='
        global global_num,loop_num,Gtotal_count,Gtotal_fans
        Pfollow = Gtotal_count/24+1
        Pfans = Gtotal_fans/24+1
        if global_num==(Pfans+Pfollow+1) or (global_num==0 and loop_num==0):
        # if global_num%120==0 or (global_num==0 and loop_num==0):
            global_num = 0
            loop_num = 0
            Gtotal_count=0
            Gtotal_fans=0
            if getResource==0 and getUks==0 and getPage==0:
                global Linsert,Lupdate
                Linsert_len = len(Linsert)
                Lupdate_len = len(Lupdate)
                if Linsert_len>0:
                    Linsert_sql = ",".join(Linsert)+";"
                    self.cursor.execute("INSERT INTO `uk`(`level`, `avatar_url`, `uk`, `uname`, `fans_count`) VALUES "+Linsert_sql)
                    self.conn.commit()
                    Linsert = []

                if Lupdate_len>0:
                    Lupdate_execute = ",".join(Lupdate)
                    sql = "UPDATE uk SET used=0 where uk in("+Lupdate_execute+");"
                    sql = sql.encode('utf-8')
                    self.cursor.execute(sql)
                    Lupdate = []

                global number,table,fans_uks,subscribe_uks,level,level_num,randId

                count_sql = "SELECT COUNT(*) FROM  `uk`  WHERE level=\'"+str(level)+"\'"
                count_sql = count_sql.encode('utf-8')
                count = self.cursor.execute(count_sql)
                fetch = self.cursor.fetchall()
                global On_Level_Num,On_Fans_Num
                On_Level_Num = fetch[0][0]
                if int(On_Level_Num) == 0:
                    byield = 0
                else:
                    byield = 1
                #     os.system('read -p "Press any key to continue." var')
                level_uk_num = (int(On_Level_Num)/1000)+1
                offset = 0
                getResource = 1
                print '===============ENTER Parse ==========On_Level_Num:'+str(On_Level_Num)
                while offset<=level_uk_num:
            # SELECT * FROM `uk` WHERE 1 order by level limit 100000000000 offset 0;
                    sql = "SELECT uk FROM uk WHERE level=\'"+str(level)+"\' order by level limit 10000000000000 offset "+str(offset*1000)
                    sql = sql.encode('utf-8')
                    offset = offset + 1
                    count = self.cursor.execute(sql)
                    rows = self.cursor.fetchall()
                    for i in rows:
                        uk = i[0]
                        print '=====Parse UK ==='+str(uk)
                        fans_newurl = "http://pan.baidu.com/share/homerecord?uk="+str(uk)+"&page=1&pagelength=60"
                        yield Request(fans_newurl, meta={'used':1,'proxy':self.proxy_ip}, callback=self.parse)
                getResource = 0

                now_level = level
                level_num = level_num +1
                level = randId+'#'+str(level_num)
                On_Fans_Num = 0
                #get fans and subscribe
                print "====================== Fans Handle =>Ready to level:"+now_level+'========================'
                getUks = 1
                offset = 0
                while offset<=level_uk_num:
                    sql = "SELECT uk FROM uk WHERE level=\'"+str(now_level)+"\' order by level limit 10000000000000 offset "+str(offset*1000)
                    sql = sql.encode('utf-8')
                    offset = offset + 1
                    count = self.cursor.execute(sql)
                    rows = self.cursor.fetchall()
                    for i in rows:
                        print '======Global Fans Handle==================='
                        On_Fans_Num = On_Fans_Num + 1
                        uk = i[0]
                        fans_newurl = 'http://pan.baidu.com/pcloud/friend/getfanslist?query_uk='+str(uk)+'&limit=24&start=0&bdstoken=null&channel=chunlei&clienttype=0&web=1'
                        yield Request(fans_newurl,meta={'proxy':self.proxy_ip}, headers=self.headers, callback=self.fans)
                getUks = 0
        if byield == 1:
            global_num = global_num+1
            rand = str(int(time.time() % 1000000*1000))
            T_url = 'http://pan.baidu.com/share/home?uk='+str(rand)+'&view=share#category/type=0'
            # T_url = 'http://pan.baidu.com/pcloud/feed/getsharelist?t=1437228768296&category=0&auth_type=1&request_location=share_home&start=60&limit=60&query_uk='+str(rand)+'&channel=chunlei&clienttype=0&web=1&bdstoken=4894a50a63135ce1125224baa343119a'
            yield Request(T_url, callback=self.handleGlobal)

#just save subscribe
    def subscribe(self, response):
        global subscribe_uks,On_Fans_Num,On_Level_Num
        print '=======================Subscribe Function ==================On_Fans_Num:'+str(On_Fans_Num)
        url = response.url
        url_match = re.match(".*query_uk=(\d*)&limit=24&start=(\d*)&",url)
        uk = url_match.group(1)
        start = url_match.group(2)
        now_start = start
        subscribe_json = json.loads(response.body)
        try:
            subscribe_json['follow_list']
        except Exception, e:
            subscribe_json['follow_list']=[]
        else:
            pass
        finally:
            pass
        sub_num = 0
        if subscribe_json['follow_list']!=[]:
            global Gtotal_count
            total_count = subscribe_json['total_count']
            for i in subscribe_json['follow_list']:
                sub_num = sub_num +1
                uk_in = str(i['follow_uk'])
                sql = "SELECT uk FROM uk WHERE uk="+uk_in+" and used=0"
                sql = sql.encode('utf-8')
                count = self.cursor.execute(sql)
                if count==0 and i['fans_count']>=20:
                    print '==========Subscribe INSERT==============level:'+str(level)+"number:"+str(total_count)
                    global Lupdate
                    Lupdate.append(uk_in)
                    Lupdate_len = len(Lupdate)
                    if Lupdate_len>=50:
                        Lupdate_execute = ",".join(Lupdate)
                        sql = "UPDATE uk SET used=0 where uk in("+Lupdate_execute+");"
                        sql = sql.encode('utf-8')
                        self.cursor.execute(sql)
                        Lupdate = []

                    avatar_url = str(i['avatar_url'])
                    uname = i['follow_uname']
                    fans_count = i['fans_count']

                    global Linsert
                    fol_params ="(\"%s\",\"%s\",%d,\"%s\",\"%s\")"
                    params = (level, avatar_url,int(uk_in), uname, fans_count)
                    fol_str = ""+fol_params % params+""
                    fol_str = fol_str.encode('utf-8')
                    Linsert.append(fol_str)
                    Linsert_len = len(Linsert)

                    if Linsert_len>=20:
                        Linsert_sql = ",".join(Linsert)+";"
                        self.cursor.execute("INSERT INTO `uk`(`level`, `avatar_url`, `uk`, `uname`, `fans_count`) VALUES "+Linsert_sql)
                        self.conn.commit()
                        Linsert = []
                else:
                    print 'count!=0 parse subscribe error'+str(uk_in)+str(i['fans_count'])
            if sub_num>=24 and int(start)<=2400:
                start = int(start) + 24
                if total_count > Gtotal_count:
                    Gtotal_count = total_count
                newurl = "http://pan.baidu.com/pcloud/friend/getfollowlist?query_uk="+str(uk)+"&limit=24&start="+str(start)+"&bdstoken=null&channel=chunlei&clienttype=0&web=1"
                yield Request(newurl, meta={'proxy':self.proxy_ip}, callback=self.subscribe)
            else:
                if uk==uk_seeds:
                    newurl = 'http://pan.baidu.com/pcloud/feed/getsharelist?t=1437228768296&category=0&auth_type=1&request_location=share_home&start=60&limit=60&query_uk='+str(uk)+'&channel=chunlei&clienttype=0&web=1&bdstoken=4894a50a63135ce1125224baa343119a'
                    yield Request(newurl,meta={"uk":int(uk),'proxy':self.proxy_ip}, callback=self.handleGlobal)
        else:
            print '======Error of subscribe follow_list null ====='+str(response.url)
            print str(response.body)+"___________"+str(subscribe_json)
            if uk==uk_seeds:
                print '======On_Fans_Num:'+str(On_Fans_Num)+'====On_Level_Num:'+str(On_Level_Num)
                print '==============Sub Turn To Global =========On_Fans_Num'+str(On_Fans_Num)
                newurl = 'http://pan.baidu.com/pcloud/feed/getsharelist?t=1437228768296&category=0&auth_type=1&request_location=share_home&start=60&limit=60&query_uk='+str(uk)+'&channel=chunlei&clienttype=0&web=1&bdstoken=4894a50a63135ce1125224baa343119a'
                yield Request(newurl,meta={"uk":int(uk),'proxy':self.proxy_ip}, callback=self.handleGlobal)

#just save fans
    def fans(self, response):
        global fans_uks, level,uk_seeds,Gtotal_fans
        seeds = 1
        try:
            response.meta['seeds']
            print "*******************seeds:"+str(response.meta['seeds'])
        except Exception, e:
            seeds = 0
        else:
            pass
        finally:
            pass
        print '===========================Fans Function========================='
        url = response.url
        # if url == 'http://pan.baidu.com/error/core.html'
        url_match = re.match(".*query_uk=(\d*)&limit=24&start=(\d*)&",url)
        uk = url_match.group(1)
        start = url_match.group(2)
        now_start = int(start)
        fans_json = json.loads(response.body)
        # errno = fans_json['errno']
        # if errno==-55:
        #     global proxy_num
        #     proxy_num = proxy_num +1
        #     self.proxy_ip = self.proxy[proxy_num]
        try:
            json_lists = fans_json['fans_list']
        except Exception, e:
            json_lists = []
        else:
            pass
        finally:
            pass
        fans_num = 0
        if uk == uk_seeds:
            seeds = 1
        if json_lists!=[] and int(start)<=48:
            total_count = fans_json['total_count']
            for i in json_lists:
                fans_num = fans_num + 1
                uk_in = str(i['fans_uk'])
                sql = "SELECT uk FROM uk WHERE uk="+uk_in+" and used=0"
                sql = sql.encode('utf-8')
                count = self.cursor.execute(sql)
                if count==0 and i['follow_count']>=10:
                    print '=================Fans INSERT===========level'+str(level)

                    global Lupdate
                    Lupdate.append(uk_in)
                    Lupdate_len = len(Lupdate)
                    if Lupdate_len>=50:
                        Lupdate_execute = ",".join(Lupdate)
                        sql = "UPDATE uk SET used=0 where uk in("+Lupdate_execute+");"
                        sql = sql.encode('utf-8')
                        self.cursor.execute(sql)
                        Lupdate = []

                    avatar_url = str(i['avatar_url'])
                    uname = i['fans_uname']
                    fans_count = i['fans_count']

                    global Linsert
                    fol_params ="(\"%s\",\"%s\",%d,\"%s\",\"%s\")"
                    params = (level, avatar_url,int(uk_in), uname, fans_count)
                    fol_str = ""+(fol_params % params)+""
                    fol_str = fol_str.encode('utf-8')
                    Linsert.append(fol_str)
                    Linsert_len = len(Linsert)
                    if Linsert_len>=20:
                        print Linsert
                        Linsert_sql = ",".join(Linsert)+";"
                        self.cursor.execute("INSERT INTO `uk`(`level`, `avatar_url`, `uk`, `uname`, `fans_count`) VALUES "+Linsert_sql)
                        self.conn.commit()
                        Linsert = []
                else:
                    print "********count=0"+str(i['follow_count'])
            if fans_num>=24 and int(start)<=24:
                start = int(start) + 24
                if total_count > Gtotal_fans:
                    Gtotal_fans = total_count
                newurl = 'http://pan.baidu.com/pcloud/friend/getfanslist?query_uk='+str(uk)+'&limit=24&start='+str(start)+'&bdstoken=null&channel=chunlei&clienttype=0&web=1'
                yield Request(newurl, meta={'proxy':self.proxy_ip}, headers=self.headers, callback=self.fans)
            else:
                subscribe_newurl = "http://pan.baidu.com/pcloud/friend/getfollowlist?query_uk="+str(uk)+"&limit=24&start=0&bdstoken=null&channel=chunlei&clienttype=0&web=1"
                yield Request(subscribe_newurl, meta={'sub_s':seeds,'proxy':self.proxy_ip}, callback=self.subscribe)
        else:
            print json_lists
            print fans_json
            print response.url
            print '=====Error of Fans Parse fans_list null===='+str(response.url)
            subscribe_newurl = "http://pan.baidu.com/pcloud/friend/getfollowlist?query_uk="+str(uk)+"&limit=24&start=0&bdstoken=null&channel=chunlei&clienttype=0&web=1"
            yield Request(subscribe_newurl, meta={'sub_s':seeds,'proxy':self.proxy_ip}, callback=self.subscribe)

