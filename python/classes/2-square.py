#!/usr/bin/env python3
class Square:
    """defines a square"""
    def __init__(self,size=0):
        try:
            if size >= 0:
                self.__size=int(size)
            else:
                raise ValueError("size must be >=0")
              
        except TypeError:
            print("size must be integer")    
    







#private instance attribute: size
#Instantiation with optional size: def __init__(self, size=0):
#size must be an integer, otherwise raise a TypeError exception with the message size must be an integer
#if size is less than 0, raise a ValueError exception with the message size must be >= 0
#You are not allowed to import any module