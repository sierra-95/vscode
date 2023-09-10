#!/usr/bin/env bash
i=1
while [ $i -le 10 ]
do
echo "Number=$i"
    if [ $i -eq 9 ]
    then
        echo "Almost done"
    fi    
((i++))
done    