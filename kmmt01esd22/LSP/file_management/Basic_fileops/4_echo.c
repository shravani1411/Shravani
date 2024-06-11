/*4. Write a system programming your own version of echo command \?*/

#include<unistd.h>
#include<stdio.h>
int mystrlen(char s[])
{
	int i;
	for(i=0;s[i]!=0;i++);
	return i;
}
int main(int argc,char *argv[])
{
	int i;
	if(argv[1]==0)
		goto label;
	for(i=1;i<argc;i++)
	{
		write(1,argv[i],mystrlen(argv[i]));
label:write(1," ",1);
	}
	return 0;
}
