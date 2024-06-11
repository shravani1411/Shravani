#include<stdio.h>
#include<string.h>
int mystrlen(char str[])
{
	int i=0;
	while(str[i]!=0)
	{
		i++;
	}
	return i;
}

int main()
{
	char str[100]="kernel masters";
	printf("%u\n",mystrlen(str));
}
