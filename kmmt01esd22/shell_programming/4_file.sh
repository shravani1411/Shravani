#Write script to determine whether given file exist or not, file name is supplied as command line argument, Also check for sufficient number of command line arguments.

#!/bin/sh
#echo "number of arguments:$#"
#echo "shell name=$0"
#echo "argumrnts=$1"
if [ $# -eq 1 ]
then
if [ -f $1 ]
then 
echo "file is found"
else
echo "file is not found"
fi
else
echo "please provide sufficient file"
fi
