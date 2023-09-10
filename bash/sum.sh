#!/usr/bin/env bash
if [ "$#" -eq 0 ]
then
    echo "Usage: filename\tnum1\tnum2"
else
    sum=$(($1+$2))
    echo $sum
    echo "Exit status:\"$?\""
fi
