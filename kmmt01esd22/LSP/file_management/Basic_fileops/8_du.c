/*8. Write a system programming your own version of du & touch command?*/

#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
#include<string.h>
int main(int argc,char *argv[])
{
	int sum=1,fd,r;
	char ch;
	fd=open(argv[1],O_RDONLY);
	while(r=read(fd,&ch,1))
		sum=sum*sizeof(ch);
	printf("%d\n",sum);
}	

