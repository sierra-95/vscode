#!/usr/bin/env bash
# install haproxy
sudo apt-get update
sudo apt-get -y install haproxy
#http uses port 80
config="frontend http
\tbind *:80
\tmode http
\tdefault_backend web-backend
backend web-backend
\tbalance roundrobin
\tserver 117256-web-01 3.94.185.2 check
\tserver 117256-web-02 100.26.132.107 check"
#\t is for tab
#config="frontend http bind *:80 mode http default_backend web-backend
echo -e "$config" | sudo tee -a /etc/haproxy/haproxy.cfg
echo -e "ENABLED=1\n" | sudo tee -a /etc/default/haproxy
sudo service haproxy restart