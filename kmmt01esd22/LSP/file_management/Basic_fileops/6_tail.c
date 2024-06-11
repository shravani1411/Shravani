/*6. Write a system programming your own version of head & tail command?*/

#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
#include<string.h>
int main(int argc,char *argv[])
{
	char ch;
	int i=0,r,R,fd,j=0,fd1,k=0;
	fd=open(argv[1],O_RDONLY);
	fd1=open(argv[1],O_RDONLY);
	while(r=read(fd,&ch,1))
	{
		if(r<0)
			perror("read fails:");
		if(ch=='\n')
			i++;
	}
	i=i-10;
	while(R=read(fd1,&ch,1))
	{
		if(ch=='\n')
			j++;
		if(j>=i)
		{
			++k;
			if(k>1)
				write(1,&ch,R);}
	}
}


