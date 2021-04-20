#/bin/bash
chmod 777 l21.sh
ls
for filename in *; do
	if [ -d ${filename} ]; then
	       echo "${filename} is a directory"
	elif [ -x ${filename} ]; then
		echo "${filename} is an executible"
	else
		echo "${filename} is not an executible"
	fi
done

