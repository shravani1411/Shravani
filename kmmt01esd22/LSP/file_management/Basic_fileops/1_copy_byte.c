/*1. Write a C program that makes a copy of a file using standard I/O and system calls.  Explain the  Difference between System Call and Standard Library.*/

#include<stdio.h>
#include<fcntl.h>
#include<errno.h>
#include<stdlib.h>
#include<unistd.h>
int main(int c,char *p[])
{
	int fd1,fd2,buff;
	fd1=open(p[1],O_RDONLY);
	if(fd1<0)
	{
		perror("open failed");
		exit(0);
	}
	fd2=open(p[2],O_WRONLY);
	if(fd2<0)
	{
		perror("open failed");
		exit(1);
	}
	while(read(fd1,&buff,1)!=0)
		write(fd2,&buff,1);
	close(fd1);
	close(fd2);
}
