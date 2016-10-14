begin
  @a=1/0
  # raise "this is a yc" 抛出异常
rescue
  puts $!
ensure
  puts "finished"
end