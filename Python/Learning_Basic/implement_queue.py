class Queue :
    def __init__(self):
        self.value = []
    def enqueue(self,val):
        self.value.append(val)
    def dequeue(self):
        self.front = self.value[0]
        self.value = self.value[1:]
        return front
    
q1 = Queue()

q1.enqueue(10)
size = int(input("Enter the size : "))
for i in range(0 , size):
    x = int(input("Enter the value :"))
    q1.enqueue(x)

print("This is our queue")

q1.enqueue(50)
print(q1.value)


        