#!/usr/bin/env bash
# install ngix
sudo apt-get update
sudo apt-get -y install nginx
echo "Hello World!" | sudo tee /var/www/html/index.html
sudo nginx -t
sudo service nginx restart