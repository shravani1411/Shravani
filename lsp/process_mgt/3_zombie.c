#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include<stdlib.h>

int main(void)
{
	pid_t pid;
	pid=fork();
	if (pid==0)
	{
		printf("I am a child process\n");
		printf("Child process ID : %d \n", getpid());
		printf("Childs Parent process ID : %d\n",getppid());
	}  
	else
	{
		getchar();
		int status;
		wait(&status);
	//	getchar();
		printf("child process completed\n");
		printf("I am a parent process\n");
		printf("Parent process ID : %d \n",getpid());
		printf("Parent's parent ID(Shell id) : %d\n",getppid());
//		wait(NULL);
//		exit(0);
	}
	return 0;
}
