#!/usr/bin/env python3
def safe_print_division(a, b):
    result=0
    try:
       result=a/b
    except ZeroDivisionError:
        result=None
        return result
    finally:
        print("inside result:",result)
        return result    