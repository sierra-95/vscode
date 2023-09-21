#!/usr/bin/env bash
# redirection
sudo apt-get update
sudo apt-get -y install nginx
echo "Hello World!" | sudo tee /var/www/html/index.html
new_string="server_name _;\n\trewrite ^\/redirect_me http:\/\/100.24.72.250\/some_page.html permanent;"
sudo sed -i "s/server_name _;/$new_string/" /etc/nginx/sites-available/default
#creating a custom error html page
echo "Ceci n'est pas une page" | sudo tee /var/www/html/custom_404.html
string_404="server_name _;\n\terror_page 404 \/custom_404.html;\n\tlocation = \/custom_404.html {\n\t\troot \/var\/www\/html;\n\t\tinternal;\n\t}"
sudo sed -i "s/server_name _;/$string_404/" /etc/nginx/sites-available/default

sudo nginx -t
sudo service nginx restart