#WAP to delete an element from the list
li=[]
n=int(input("Enter the Range = "))
for i in range(0,n,1):
    li.append(int(input("Enter the No. = ")))#[10,20,10,30,40]
x=int(input("Enter the No. to be delete = "))#20
c=0
j=0
for i in range(0,n,1):  #10,20,10,30,40
    if li[i]==x:
        c=1
        j=i
        break
if c==1:
    del(li[j])
    print(li)
else:
    print(x,"Not Found")