#Write a shell script to find factorial of a given integer.

#!/bin/sh
echo "enter the number"
read n
i=1
while [ $n -gt 1 ]
do
i=$((n*i))
n=$((n-1))
done
echo "factorial:$i"





