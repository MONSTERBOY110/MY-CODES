#WAP to remove the element from the list
li=[]
n=int(input("Enter the Range = "))
for i in range(0,n,1):
    li.append(input("Enter the Name = "))
print(li)
#x=input("Enter the String = ")
#li.remove(x)
li.remove(input("Enter the String = "))
print(li)