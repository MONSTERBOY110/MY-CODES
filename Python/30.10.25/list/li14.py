#WAP to sum of all elements from the list
li=[]
n=int(input("Enter the Range = "))
for i in range(0,n,1):
    li.append(int(input("Enter the No. = ")))
print(li)
print(sum(li))
