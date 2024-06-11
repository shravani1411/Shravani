#Write a shell script that receives any number of file names as arguments checks if every argument supplied is a file or a directory and reports accordingly. Whenever the argument is a file, the number of lines on it is also reported.

#!/bin/sh
echo "arguments = $@"
for i in $@
do
if [ -f $i ]
then
echo "$i is a file"
j=`cat $i | wc -l`
echo "number of lines =$j"
elif [ -d $i ]
then
echo "$i is a directory"
fi
done
