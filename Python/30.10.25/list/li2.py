#wap to take list input & print the list
li=[]
n=int(input("Enter the Range = "))
for i in range(0,n,1):
    x=int(input("Enter the No. = "))
    li.append(x)
print(li)
for i in li:
    print(i,end=',')
y=input("Enter the Name = ")
li.append(y)
print(li)