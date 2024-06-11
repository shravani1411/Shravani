#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<signal.h>
#include<stdlib.h>
#include<sys/wait.h>
void mykill(char *p,char *s)
{
	int pid,r,S;
	pid=atoi(p);
	S=s[1]-'0';
	printf("%d\t%d\n",S,pid);
	r=kill(pid,S);
	if(r<0)
		perror("kill failed\n");
}

int main(char argc[],char *agv[])
{
	mykill(agv[2],agv[1]);
}
