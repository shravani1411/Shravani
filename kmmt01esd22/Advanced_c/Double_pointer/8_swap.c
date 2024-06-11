//8) Repeat command line argument string sorting using swapping function using call by reference of pointers.
#include<stdio.h>
#include<stdlib.h>
void swap(char ** ,char **);
int mystrcmp(char [],char []);
int main(int c,char *arg[])
{
	int i=1,j,x;
	for(i=1;i<c-1;i++)
	{
		for(j=1;j<c-1;j++)
		{
			x=mystrcmp(arg[j],arg[j+1]);
			if(x>0)
			{
				swap(&arg[j],&arg[j+1]);
			}

		}
	}
	for(i=1;i<c;i++)
	{
		printf("%s\n",arg[i]);
	}
}

int mystrcmp(char arg1[],char arg2[])
{
	int i;
	for(i=0;arg1[i]==arg2[i];i++)
	{
		if(arg1[i]==0)
			return 0;
	}
	return arg1[i]-arg2[i];
}

void swap(char **arg1,char **arg2)
{
	char *t;
	t=*arg1;
	*arg1=*arg2;
	*arg2=t;
}

