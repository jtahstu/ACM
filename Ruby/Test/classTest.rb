class Man
  def initialize(name, age)
    @name=name
    @age=age
  end

  def sayname
    puts @name
  end

  def sayage
    puts @age
  end
end
m=Man.new("jtahstu", 21)
m.sayname
m.sayage
b=Man.new("jintao", 20)
b.sayname
b.sayage

class Man2< Man #继承
  def love
    puts "i love you"
  end
end
t=Man2.new("jtahstu", 21)
t.sayname
t.sayage
t.love
