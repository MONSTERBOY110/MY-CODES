#WAP to count the frequency of a specific element
li=[]
c=0
n=int(input("Enter the Range = "))
#input
for i in range(0,n,1):
    li.append(int(input("Enter the No. = ")))
x=int(input("Enter the No. u want to Search = "))
for i in li:
    if i==x:
       c+=1
if c>0:
    print(x,"Found",c,"times")
else:
     print(x,"NOT Found")