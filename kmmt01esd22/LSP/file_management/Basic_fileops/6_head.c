/*6. Write a system programming your own version of head & tail command?*/

#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
#include<string.h>
int main(int argc,char *argv[])
{
	char ch;
	int i,r,fd;
	fd=open(argv[1],O_RDONLY);
	for(i=0;i<10;)
	{
		r=read(fd,&ch,1);
		if(r<0)
			perror("read fails:");
		write(1,&ch,r);
		if(ch=='\n')
			i++;
	}
	close(fd);
}


