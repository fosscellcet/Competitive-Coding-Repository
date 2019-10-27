class Stack:
    def __init__(self):
        self.top=-1
        self.size=0
        self.stack=[]

    def push(self,x):
        self.top=self.top+1
        self.stack.append(x)
        self.size+=1

    def pop(self):
        if self.size==0:
            print("stack is empty")
            return None
        x=self.stack[self.top]
        self.top-=1
        self.size-=1
        return x

    def display(self):
        for i in range(0,self.size):
            print(self.stack[i])


s=Stack()
print("pushing 3 elements")
s.push(34)
s.push(43)
s.push(56)
s.display()
print("after popping")
s.pop()
s.display()
