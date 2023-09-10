#!/usr/bin/env bash
#file existence and usefulness
if [ "$#" -eq 0 ]
then
    echo "usage: ./filexists file-to-check"
    
elif [ -f "$1" ] && [ -s "$1" ]
then
    echo "File exists and is not empty"
else
    echo "File is empty or doesn't exist"   
fi  