#Write script to print given number in reverse order, for eg. If no is 123 it must print as 321

#!/bin/sh
echo "enter the number"
read n
sum=0
while [ $n -ne 0 ]
do
r=$(($n % 10))
n=$(($n / 10))
sum=$(($sum*10+$r))
done
echo "reverse order: $sum"

