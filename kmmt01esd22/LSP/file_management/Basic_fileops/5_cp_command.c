/*5. Write a system programming your own version of cp command?*/

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
int main(int argc,char *argv[])
{
	int fd1,fd2,ret;
	char buff[1024];
	fd1=open(argv[1],O_RDONLY);
	if(fd1==-1)
	{
		perror("open fails for file1");
		exit(0);
	}
	fd2=open(argv[2],O_WRONLY|O_CREAT,S_IRUSR|S_IWUSR);
	if(fd2==-1)
	{
		perror("open fails for file2");
		exit(0);
	}
	while((ret=read(fd1,buff,1024))!=0)
	{
		if(ret==-1)
			break;
		write(fd2,buff,ret);
	}
	close(fd1);
	close(fd2);
	return 0;
}
