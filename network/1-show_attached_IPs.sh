#!/usr/bin/env bash
#print current ipv4 address
ip -4 addr show | grep -oP '(?<=inet\s)\d+(\.\d+){3}' 
