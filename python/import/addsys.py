#!/usr/bin/python3
import sys
add=0
print("Filename: {}".format(sys.argv[0]))
print("argc:{:d}".format(len(sys.argv)))
if(len(sys.argv)>1):
    for i in range(1,len(sys.argv)):
        add+=int(sys.argv[i])
    print("Sum: {:d}".format(add))
