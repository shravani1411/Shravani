#Write a shell script that accepts a file name, starting and ending line numbers as arguments and displays all the lines between the given line numbers.

#!/bin/sh
echo "display line number between user input \ $#:$#"
if [ $# -eq 3 ]
then
if [ -f $3 ]
then
head -n $2 $3 | tail -n $(($2 -$1 +1))
else
echo "file not match"
fi
else
echo "arg not matching, enter 3 arg"
fi
