#WAP to store unique element from one list to another list
li=[]
li2=[]
n=int(input("Enter the Range = "))
#input
for i in range(0,n,1):
    li.append(int(input("Enter the No. = ")))
print(li)#  li= [10,20,10,30,40]     li2=[10,20,30]
for i in li:
    if i not in li2:
        li2.append(i)
print(li2)