#!/bin/bash
chmod 777 l22.sh
echo "Enter your name: "
read firstname middlename lastname
if [ -z $lastname ];
then
	echo "$firstname $middlename"
else
	echo "$firstname $lastname"
fi
