p [0,1,2].first
p [].first
ary=[0,1,2]
p ary.first(0)
p ary.first(1)
p ary.first(2)
p ary.first(3)
p ary.first(4)
p [1,[2,3,[4],5]].flatten
array=[[[1,[2,3]]]]
array.flatten!
p array
ary=%w(a b c d e)
p ary.values_at(0,2,4)
p ary.values_at(3,4,5,6,35)
p ary.values_at(0,-1,-2)
p ary.values_at(-4,-5,-6,-35)
ary=%w(foo bar baz)
ary.insert 2,'a','b'
p ary

