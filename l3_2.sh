#!/bin/bash
chmod 777 l3_2.sh
IFS=$':'
read -p "What is your eecs user name: " userID
found=0
while read login password uid gid name dir sh
do
	if [ $login == $userID ]
	then
		echo -e Good day $name
		found=$(($found + 1))
	fi
done </etc/passwd
if [[ found -eq 0 ]]
then
	echo "No such login name"
fi
