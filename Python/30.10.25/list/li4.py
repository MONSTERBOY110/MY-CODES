#wap to take list input & print the list
li=[]
n=int(input("Enter the Range = "))
for i in range(0,n,1):
    li.append(input("Enter the String = "))
print(li)
for i in li:
    print(i,end=' ')
print()
for i in range(0,n,1):
    print(li[i],end=' ')