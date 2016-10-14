i=23;
f=-33.53
puts "i:", i
puts "f:", f
puts "i.to_f", i.to_f
puts "f.to_i:", f.to_i
puts "f.ceil", f.ceil
puts "f.floor", f.floor
puts "f.round", f.round #向上取整
p Math::PI
p Math::E

a="my age : #{11+11}"
b="line NO.#$."
puts a
puts b

a="jtahstu"
a=a*3
puts a

p "aa".succ
p "Az".succ
p "-9".succ

a="jtahstu"
p a["jt"] #包含str则生成一致的字符串
p a["tt"]

a="jtahstu"
p a[2..4]
p a[2...4]

#若干格式化方法
a="jtahstu"
p a.center(20)
p a.ljust(20)
p a.rjust(20)
p a.center(20,"*%")
p a.ljust(20,"*%")
p a.rjust(20,"*%")

p a.count('t')  #t出现的次数

p "123456789".delete("2-8","^4-6")
p "123456789".delete("2378")
str="foobaz"
p str.insert(3,"bar")

p "a".empty?
p "".empty?

p "i love you".include?("love")

p "i love you".split(" ")