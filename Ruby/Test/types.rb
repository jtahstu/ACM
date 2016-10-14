ary = [ "fred", 10, 3.14, "This is a string", "last element", ]
ary.each do |i|
    puts i
end 

hsh = colors = { "red" => 0xf00, "green" => 0x0f0, "blue" => 0x00f }
hsh.each do |key, value|
    print key, " is ", value, "\n"
end

(10..15).each do |n|
    print n, ' '
end

(1..20).each do |x|
  print x
end