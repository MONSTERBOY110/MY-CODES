#wap to reverse a string
x=input("Enter the String = ")
len1=len(x)
print(len1)
print(x[::-1])
for i in range(len1-1,-1,-1):
    print(x[i],end='')