#list sort
li=[]
n=int(input("Enter the Range = "))
for i in range(0,n,1):
    li.append(int(input("Enter the No. = ")))
print("List = ",li)
for i in li:
    print(i,end=' ')
print()
li.sort()
print(li)

