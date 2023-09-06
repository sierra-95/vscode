#!/usr/bin/env bash
# install ngix
sudo apt-get update
sudo apt-get -y install nginx
echo "Hello World!" | sudo tee /var/www/html/index.html
#sudo tee /var/www/html/index.html: This part of the command uses the sudo command to execute the subsequent command
#with superuser privileges (root). The command tee is used to read from standard input and write to standard output and files simultaneously.
#In this case, it writes the output of the previous echo command to the file located at /var/www/html/index.html.
sudo nginx -t
sudo service nginx restart
#However, the command you provided(line 5) could be relevant if it's used to create the content that Nginx serves when
#a GET request is made to its root (/) URL. If the content of the file /var/www/html/index.html contains the 
#string "Hello World!", and if Nginx is configured to serve files from that directory, then querying Nginx at its root 
#with a GET request using curl should indeed return a page containing the string "Hello World!".