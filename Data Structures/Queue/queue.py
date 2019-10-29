class Queue:
    def __init__(self):
        self.size=0
        self.front=-1
        self.back=-1
        self.queue=[]

    def enqueue(self,x):
        if self.front==-1:
            self.front+=1
            self.back+=1
            self.size+=1
        else:
            self.back+=1
            self.size+=1
        self.queue.append(x)

    def dequeue(self):
        if self.size==0:
            print("queue is empty")
            return None
        else:
            x=self.queue[0]
            if self.back==0:
                self.front=-1
                self.back=-1
                self.size=0
            else:
                self.queue=self.queue[1:]
                self.back-=1
                self.size-=1

    def display(self):
        for i in range(0,self.size):
            print(self.queue[i])


q=Queue()
print("enqueing 3 elements")
q.enqueue(34)
q.enqueue(43)
q.enqueue(56)
q.display()
print("after dequeue")
q.dequeue()
q.display()

