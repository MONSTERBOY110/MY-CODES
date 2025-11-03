#WAP to count a specific element no. of times within a list
li=[]
n=int(input("Enter the Range = "))
for i in range(0,n,1):
    li.append(int(input("Enter the No. = ")))
print("List = ",li)
x=int(input("Enter the No. to be searched for = "))# 20
j=0
for i in li:   #[10,20,30,10,20]
    if i==x:
        j=j+1   #2
print(j)
if j>=1:
    print(x,"Present",j,"Times")
else:
    print(x,"Not Found")    
    