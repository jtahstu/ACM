# 单行循环块
# 重复三次
3.times { puts "jtahstu" }
puts "---------------"

# 从1循环到9
1.upto(9) { |i| print i," " if i<6 }
puts "\n---------------"
1.upto(9) do |x|
  print x, " "
end
puts "\n---------------"

# 从9到1的循环
9.downto(1) { |i| print i," " if i<6 }
puts "\n---------------"

# 一个从0到12，步长为3的循环
0.step(12, 3) { |i| print i, " " }
puts "\n---------------"

# 取出区间中的元素
(1..9).each { |i| print i, " " if i<6 }
puts "\n---------------"
[1, 1, 2, 3, 5].each { |val| print val, " " }

