#!/usr/bin/python3

def replace_in_list(my_list,idx,new_element):
    if(idx<1):
        return my_list
    if(idx>len(my_list)):
        return my_list
    my_list[idx]=new_element
    return my_list
