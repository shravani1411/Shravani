#Write a shell script to list all of the directory files in a directory.

#!/bin/sh
for directory in $1/*
do
if [ -d $1 ]
then
echo $directory
fi
done
