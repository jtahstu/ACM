def test_block
  puts "Start"
  yield(1, 2)
  yield(3, 4)
  puts "End"
end

test_block { |a, b| puts a+b }