#!/usr/bin/ruby

puts "This is main Ruby Program"

END {
   puts "Terminating Ruby Program"
}
BEGIN {
   puts "Initializing Ruby Program"
}


#指数算术 
puts 2**(1/4)#1与4的商为0，然后2的0次方为1 
puts 16**(1/4.0)#1与4.0的商为0.25（四分之一），然后开四次方根 

#!/usr/bin/ruby -w

puts 'escape using "\\"';
puts 'That\'s right';

#您可以使用序列 #{ expr } 替换任意 Ruby 表达式的值为一个字符串。在这里，expr 可以是任意的 Ruby 表达式。
puts "Multiplication Value : #{24*60*60}";

name="Ruby" 
puts name 
puts "#{name+",ok"}" 