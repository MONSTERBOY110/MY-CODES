#store even & odd list in 2 separate list
li=[]
lieven=[]
liodd=[]
n=int(input("Enter the Range = "))
for i in range(0,n,1):
    li.append(int(input("Enter the No. = ")))
print("List = ",li)
for i in li:
    if i==0:
        continue
    elif i%2!=0:
        liodd.append(i)
    else:
        lieven.append(i)
print("Even List = ",lieven)
print("Odd List = ",liodd)