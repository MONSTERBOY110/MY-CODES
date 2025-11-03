#WAP to take runtime input & print the list
li=[]
n=int(input("Enter the Range = "))
#input
for i in range(0,n,1):
    li.append(input("Enter the String = "))

# print
print("List = ",li)
#print element wise
for i in li:
    print(i,end=' ')
print()
#print index wise
for i in range(0,n,1):
    print(li[i],end=' ')