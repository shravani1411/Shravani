/*1. Write a C program that makes a copy of a file using standard I/O and system calls.  Explain the  Difference between System Call and Standard Library.*/

#include<stdio.h>
#include<errno.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

int main()
{
	char block[1024]; 
	int in, out; 
	int nread;

	in = open("file.in", O_RDONLY); 
	if(in<0)
	{
		perror("open failed");
		exit(0);
	}
	out = open("file.out", O_WRONLY|O_CREAT, S_IRUSR|S_IWUSR);
	if(out<0)
	{
		perror("open failed");
		exit(1);
	}  
	while((nread = read(in,block,sizeof(block))) > 0)
		write(out,block,nread);

	close(in);
	close(out);
}

