#!\usr\bin\python3
num1,num2=input("Enter 2 numbers:\n").split()
num1=int(num1)
num2=int(num2)
operator=input("Enter operator:\n")
if operator=='+':
    print("{}+{}={}\n".format(num1,num2,(num1+num2)))
else: 
            print("{}-{}={}\n".format(num1,num2,(num1-num2)))
