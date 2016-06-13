import demjson

# data = [ { 'a' : 1, 'b' : 2, 'c' : 3, 'd' : 4, 'e' : 5 } ]

# json = demjson.encode(data)
# print json


# json = '{"a":1,"b":2,"c":3,"d":4,"e":5}';

# text = demjson.decode(json)
# print  text


jsonfile = open('nyojaccode.json', 'r')
json = jsonfile.read()
data = demjson.decode(json)
for i in data['RECORDS']:
	print i['pid'], i['code']
