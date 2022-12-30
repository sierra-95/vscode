#!/usr/bin/python3
if __name__=="__main__":
    from calculator import add,sub,mul,div
import sys
print("argc:{:d}".format(len(sys.argv)))

if(len(sys.argv)!=4):
    print("Usage: ./100-my_calculator.py <a> <operator> <b>")
    exit(1)
a=sys.argv[2]
operator=sys.argv[3]
b=sys.argv[4]
if sys.argv[3] != +
    print("Unknown operator. Available operators: +, -, * and /")
    exit(1) 
if(operator== '+'):
    print("{:d} + {:d} = {:d}".format(a,b,add(a,b)))
elif(operator=='-'):
    print("{:d} - {:d} = {:d}".format(a,b,sub(a,b)))
elif(operator=='*'):
    print("{:d} * {:d} = {:d}".format(a,b,mul(a,b)))
else:
    print("{} / {} = {}".format(a,b,int(div(a,b))))   
 

