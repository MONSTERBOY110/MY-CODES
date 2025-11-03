#copy unique element from 1 list to another list
li=[]
n=int(input("Enter the range = "))
for i in range(0,n,1):
    li.append(input("Enter the Data = "))
print(li)
li2=[]
for i in li:
    if i not in li2:
        li2.append(i)
print("Copied List = ",li2)