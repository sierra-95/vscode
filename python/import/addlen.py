#!/usr/bin/python3

import sys
add =0.0
#getting length of command/argc
n=len(sys.argv)
for i in range(1,n):
    add+=float(sys.argv[i])
print("sum:{}".format(add))    