#WAP to find out quotent & reminder 
x=int(input("Enter the 1st No.  = "))
y=int(input("Enter the 2nd No.  = "))
z=divmod(x,y)
print(z)
print("Quotient = ",z[0])
print("Reminder = ",z[1])
