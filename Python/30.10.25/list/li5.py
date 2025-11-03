#store +ve & -ve list in 2 separate list
li=[]
lipos=[]
lineg=[]
lineu=[]
n=int(input("Enter the Range = "))
for i in range(0,n,1):
    li.append(int(input("Enter the No. = ")))
print("List = ",li)
for i in li:
    if i>0:
        lipos.append(i)
    elif i<0:
        lineg.append(i)
    else:
        lineu.append(i)
print("Positive List = ",lipos)
print("Negative List = ",lineg)
print("Neutral List = ",lineu)