#!/usr/bin/python3
element_at=__import__('extract').element_at

my_list=[1,2,3,4,5]
idx=3
print("elemnt at index {:d} is {}".format(idx,element_at(my_list,idx)))
