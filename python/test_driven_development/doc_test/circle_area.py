#!/usr/bin/env python3
from math import pi

def circle_areas(r):
    try:
        if type(r) in [int,float]:            
            if  r < 0 :
                raise ValueError
            else: 
                return (r**2)*pi
        elif type(r) in [str]:
            raise TypeError
    except TypeError:
        print("No strings allowed")
        return ("Try again")
    except ValueError:
        print("Negative numbers not allowed") 
        return ("Try again") 
if __name__ == "__main__":
    import doctest
    doctest.testmod()     
print(circle_areas("name"))


