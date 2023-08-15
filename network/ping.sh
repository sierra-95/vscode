#!/usr/bin/env bash
#ping
if [ $1 ]
then
	ping -c 5 $1
else
	echo"Wrong usage"
fi
