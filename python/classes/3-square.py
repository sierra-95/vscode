#!/usr/bin/env python3
#!/usr/bin/env python3
class Square:
    """defines a square"""
    def __init__(self,size=0):
        try:
            if int(size) >= 0:
                self.__size=int(size)
            else:
                raise ValueError("size must be >=0")    
        except TypeError:
            print("size must be integer")    
    
    def area(self):
        area=self.__size*self.__size
        return area








#Public instance method: def area(self): that returns the current square area