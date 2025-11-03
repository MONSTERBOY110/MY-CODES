#WAP to delete an element from the list by using remove()
li=[]
n=int(input("Enter the Range = "))
for i in range(0,n,1):
    li.append(int(input("Enter the No. = ")))
x=int(input("Enter the No. to be delete = "))#10
for i in li:    #[10,20,10,30,10]
    if i==x:   
        li.remove(i)   #[20,30]
print("List = ",li)




