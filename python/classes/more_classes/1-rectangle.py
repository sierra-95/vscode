#!/usr/bin/env python3
# -*- coding: utf-8 -*-
class Rectangle:
    def __init__(self,width=0,height=0):
        #if integer
        if width== int(width) and  height== int(height): 
            if width >= 0 and height >=0 :
                self.__width=int(width)
                self.__height=int(height)
        #if less than zero       
        elif width==int(width) and height==int(height):
            if width < 0 and height < 0:
                raise ValueError("size must be >=0")
        #non integer      
        else: 
            raise TypeError("size must be integer")
         
    @property
    def width(self):
        return self.__width
    @width.setter
    def width(self,value):
        self.__width=value  
    @property
    def height(self):
        return self.__height
    @height.setter
    def height(self,value):
        self.__height=value      






#Private instance attribute: width:
#property def width(self): to retrieve it
#property setter def width(self, value): to set it:
#width must be an integer, otherwise raise a TypeError exception with the message width must be an integer
#if width is less than 0, raise a ValueError exception with the message width must be >= 0
#Private instance attribute: height:
#property def height(self): to retrieve it
#property setter def height(self, value): to set it:
#height must be an integer, otherwise raise a TypeError exception with the message height must be an integer
#if height is less than 0, raise a ValueError exception with the message height must be >= 0
#Instantiation with optional width and height: def __init__(self, width=0, height=0):
#You are not allowed to import any module