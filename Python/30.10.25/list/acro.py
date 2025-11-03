'''WAP to print the Acromatic String
  input -> sneharika saha ghosh
  output --> S.S.GHOSH
'''
x=input("Enter the String = ")
print("String = ",x)
x=x.upper()
print(x)
length=len(x)
j=0
for i in range(0,length,1):
    if i==0:
        print(x[i],end='')
    elif x[i]==' ':
        print(f".{x[i+1]}",end='')
        j=i
j=j+2
x=x.lower()
for i in range(j,length,1):
    print(x[i],end='')