# coding:UTF-8
d = {'a':1, 'b':2, 'c':3}
print list(d.keys())


for key in sorted(d):
    print key, '=>', d[key]  # map排序输出
    
sq = [x ** 2 for x in [1, 2, 3, 4, 5]]
print sq

squ = []
for x in [1, 2, 3, 4, 5]:
    squ.append(x ** 2)
print squ

squ[0] = 2;
print squ

t = (1, 2, 3, 4, 5)  # 元组
print len(t)

t += (5, 6)
print t, t.count(5), t.index(3)
