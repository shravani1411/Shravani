#Write Script to find out biggest number from given three nos. Nos are supplied as command line arguments. Print error if sufficient arguments are not supplied.

#!/bin/sh
if [ $# -eq 3 ]
then
	if [ $1 -gt $2 ]
	then
		if [ $1 -gt $3 ]
		then
			echo "$1 is bigger"
		else
		echo "$3 is bigger"
		fi
	elif [ $2 -gt $3 ]
	then 
	echo "$2 is bigger"
	else
	echo "$3 is bigger"
	fi
else 
	echo "error"
fi

