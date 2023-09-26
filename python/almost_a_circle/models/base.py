#!/usr/bin/env python3
"""Assigns id to objects"""
class Base:
    __nb_objects=0
    #private attrib "number of objetcs"
    #its of class base hence to use:
    #base.__nb_objects
    def __init__(self, id=None):
        if id is not None:
            self.id=id
        else:
            #if a user has no id, its auto assigned from zero to auto_increment
            Base.__nb_objects+=1
            self.id=Base.__nb_objects             
        