#!/usr/bin/env bash
# create a RSA key Pair
ssh-keygen -b 4096 -t rsa -N betty -f school
#bytes(-b)  (-t)key-to-create(rsa,ecdsa) (-N)paraphrase (-f)file-to-store