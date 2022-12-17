#!\usr\bin\py
num1,num2=input("Enter 2 numbers").split()
num1=int(num1)
num2=int(num2)
sum=num1+num2
di=num1-num2 
m=num1*num2 
div=num1/num2 
print("{:d}+{:d}={:d}".format(num1,num2,sum))
print("{:d}-{:d}={:d}".format(num1,num2,di))
print("{:d}*{:d}={:d}".format(num1,num2,m)) 
print("{:d}/{:d}={:f}".format(num1,num2,div)) 


