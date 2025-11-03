#WAP to search index from the list
li=[]
n=int(input("Enter the Range = "))
for i in range(0,n,1):
    li.append(input("Enter the Name = "))
print(li)
print(li.index(input("Enter the String = ")))