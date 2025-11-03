#WAP to store positive and negative element in 2 separate list
li=[]
lipos=[]
lineg=[]
n=int(input("Enter the Range = "))
#input
for i in range(0,n,1):
    li.append(int(input("Enter the No. = ")))
print(li)
for i in li:
    if i>0:
        lipos.append(i)
    elif i<0:
        lineg.append(i)
print("Positive Element list = ",lipos)
print("Negative Element list = ",lineg)

