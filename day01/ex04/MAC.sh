ifconfig -a link | grep ether | sed 's/\ether //' | tr -d '[:blank:]'
