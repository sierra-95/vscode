#!/usr/bin/python3
import sys
add=0
if(len(sys.argv)>1):
    for i in range(1,len(sys.argv)):
        add+=int(sys.argv[i])
print("{:d}".format(add))