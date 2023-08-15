#!/usr/bin/env bash
#resolve localhost
cp /etc/hosts ~/hosts.new
sed -i s/127.0.0.1/127.0.0.2/ ~/hosts.new
echo "
