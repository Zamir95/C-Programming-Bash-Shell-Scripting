#!/bin/bash
chmod 777 l23.sh
echo "Enter your name: "
read -a name
if [[ ${#name[@]} -eq 2 ]]
then 
	echo "${name[0]} ${name[1]}"
elif [[ ${#name[@]} -eq 3 ]]
then
	echo "${name[0]} ${name[1]:0:1}. ${name[2]}"
fi
