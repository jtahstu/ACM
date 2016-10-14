# 单态方法
class Man
  def initialize(name, age)
    @name=name
    @age=age
  end

  private
  def sayname
    puts @name
  end

  public
  def sayage
    puts @age
  end
end
a=Man.new("a", 6)
b=Man.new("b", 7)

def b.sayname #对象b重写了sayname方法
  puts "bbbbbb"
end

# a.sayname #出错
a.sayage
b.sayname #不出错
b.sayage