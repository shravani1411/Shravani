
#include<stdio.h>
#include<sys/wait.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
	pid_t pid;
	/* fork another process */
	pid = fork();
	if (pid == 0) 
	{ 
		/* child process */
		execl ("/bin/ls", "ls", NULL);
	}
	else 
	{ 
		/* parent process */
		/* parent will wait for the child to complete
		*/
		wait (NULL);
		printf("hi\n");
		printf ("Child Complete\n");

		exit(0);
	}
}
