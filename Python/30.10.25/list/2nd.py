'''WAP to print the Acromatic String
  input -> sneharika saha
  output --> S.S.
'''
x=input("Enter the String = ")
print("String = ",x)
x=x.upper()
print(x)
length=len(x)
for i in range(0,length,1):
    if i==0:
        print(x[i],end=".")#U.
    elif x[i]==' ':
        print(x[i+1],end=".")#S.








