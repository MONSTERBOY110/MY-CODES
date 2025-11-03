#WAP to delete an element from the list
li=[]
n=int(input("Enter the Range = "))
for i in range(0,n,1):
    li.append(int(input("Enter the No. = ")))
x=int(input("Enter the No. to be delete = "))
c=0
i=0     #[10,30,40]    x=20
while i<n:
    if li[i]==x:#40==20
        del(li[i])
        c=1
        n=n-1#3
        i=i-1#1
    i=i+1#3
if c==1:
    print("List = ",li)
else:
    print("Not Found")