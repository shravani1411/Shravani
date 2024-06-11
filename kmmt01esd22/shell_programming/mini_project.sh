
#!/bin/sh

echo "os name:"
uname
sleep 1
echo "Architecture version:"
lscpu | grep Architecture
sleep 1
echo "Kernel version:"
uname -r
sleep 1
echo "Internet status:"
ping -c 3 www.google.com
sleep 1
echo "IP address:"
ifconfig
sleep 1
echo "Memory usage:"
free -h | grep Mem
sleep 1
echo "Disk file system usage:"
df -h | grep /dev/sda
sleep 1
echo "System uptime:"
uptime -s
sleep 1
