#!/usr/bin/python3
islower=__import__('lower').islower

print("a is {}".format("lower" if islower ("a")else "upper"))
print("H is {}".format("lower" if islower ("H") else "upper"))