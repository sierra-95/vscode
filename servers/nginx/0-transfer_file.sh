#!/usr/bin/env bash
# transfer a file to my server
PATH_TO_FILE=$1
IP=$2
USERNAME=$3
PATH_TO_SSH_KEY=$4
# $#- shows number of arguments

if [ $# -le 3 ]
  then
    echo "Usage: 0-transfer_file PATH_TO_FILE IP USERNAME PATH_TO_SSH_KEY"
elif [ $# -gt 3 ]
  then
    scp -o StrictHostKeyChecking=no -i "$PATH_TO_SSH_KEY" "$PATH_TO_FILE" "$USERNAME@$IP:~/"
else
    scp -o StrictHostKeyChecking=no "$PATH_TO_FILE" "$USERNAME@$IP:~/"
fi