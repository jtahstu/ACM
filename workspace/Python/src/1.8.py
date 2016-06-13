m=[[1,2,3],
   [4,5,6],
   [7,8,9]]
print m
col2=[row[1] for row in m]
print col2
print [row[0]*2 for row in m]
print [row[1] for row in m if row[1]&1]
print [m[i][i] for i in [0,1,2]]
print [c*2 for c in 'jtahstu']
print sum(m[2])
print list(map(sum,m))
print map(sum,m)
n=[1,2,3,3,2,1]
print list(set(n))