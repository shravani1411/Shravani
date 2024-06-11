/*7. Write a system programming your own version of wc command?*/

#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
#include<string.h>
int main(int argc,char *argv[])
{
	char ch;
	int i=0,r,fd;
	fd=open(argv[1],O_RDONLY);
	while(r=read(fd,&ch,1))
	{
		if(r<0)
			perror("read fails:");
		if(ch=='.'||ch==' '||ch==',')
			i++;
	}
	printf("%d\n",i);
	close(fd);
}



