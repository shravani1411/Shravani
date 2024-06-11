#How to write script, that will print, Message ""Hello World"", in Bold and Blink effect, and in different Colors like red, brown etc using echo command."

#!/bin/sh
echo -e "\e[1;5m Hello World"
echo -e "\e[1;31m Hello World"
echo -e "\e[1;32m Hello World"
echo -e "\e[1;33m Hello World"
echo -e "\e[1;34m Hello World"
echo -e "\e[1;35m Hello World"
echo -e "\e[1;36m Hello World\033[m"

