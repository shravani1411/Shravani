#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
#include<sys/types.h>

int myshell(const char *command);
int main()
{
	char str[100];
	int i;
	printf("Runnig ps with system\n");
	while(1)
	{
		fgets(str,30,stdin);
		myshell(str);
	}
	printf("done\n");
	exit(0);
}

int myshell(const char *command)
{
	int ret,i;
	int status;
	ret=fork();
	if(ret==0)
	{
		ret=execl("/bin/sh","sh","-c",command,(char *)0);

		if(ret<0)
		{
			perror("exec fails");
			exit(0);
		}
	}
	else
	{
		wait(&status);
//		exit(0);
	}
}


