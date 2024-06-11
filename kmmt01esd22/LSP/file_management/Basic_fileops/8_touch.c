/*8. Write a system programming your own version of du & touch command?*/

#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include <sys/stat.h>
#include <errno.h>
#include <utime.h>
#include<fcntl.h>
int main(int argc,char *argv[])
{
	char ch;
	int i,r,fd;
	struct utimbuf temp;
	fd=open(argv[1], O_RDWR | O_CREAT, 0644);
	temp.actime=temp.modtime=time(NULL);
	r=utime(argv[1],&temp);
}


