#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<errno.h>
#include <sys/types.h>
#include <sys/wait.h>

int mysystem(const char *);
int main()
{
	printf("Running ps with system\n");
	system("ps -eaf");
//	mysystem("ps -eaf");
	printf("Done\n");
	exit(0);
}

int mysystem(const char *command)
{
	int ret;
	int status;
	ret=fork();
	if(ret==0)	//children process
	{
		ret=execl("/bin/sh","sh","-c",command,(char *)0);
		if(ret<0)
		{
			perror("exec fail");
			exit(0);
		}
		else	//parent process
		{
			wait(&status);
//			exit(0);
		}
	}
}
