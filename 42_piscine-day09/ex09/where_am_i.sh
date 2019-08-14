#!/bin/sh

IP=$(ifconfig | grep inet | grep broadcast | cut -d ' ' -f 2)
if [ $IP == " " ];
then
	echo "I am lost!"
else
	echo $IP
fi