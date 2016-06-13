class work:
    def __init__(self, name, pay):
        self.name = name
        self.pay = pay
    def lastname(self):
        return self.name.split()[-1]
    def giveraise(self, p):
        self.pay *= (1.0 + p)
        
bob = work('jin tao', 5000)
tom = work('tao tao', 4000)
print bob.lastname()
tom.giveraise(0.5)
print tom.pay
