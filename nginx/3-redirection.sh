#!/usr/bin/env bash
# redirection
sudo apt-get update
sudo apt-get -y install nginx
echo "Hello World!" | sudo tee /var/www/html/index.html
new_string="server_name _;\n\trewrite ^\/redirect_me http:\/\/100.24.72.250\/some_page.html permanent;"
sudo sed -i "s/server_name _;/$new_string/" /etc/nginx/sites-available/default
#sed has been used to do in-place-editing 
#where there is server_name_ it is replaced by new_string
sudo nginx -t
sudo service nginx restart