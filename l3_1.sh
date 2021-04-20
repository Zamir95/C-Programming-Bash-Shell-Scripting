#!/bin/bash
chmod 777 l3_1.sh 
while read name file1
do
	while read id file2
	do
		if [ "$file1" == "$id" ]
		then
			if [ -n "$file2" ] 
			then 
				echo "$name $file2"
		fi
	fi
done <"$2"
done <"$1"
