
#include<stdio.h>

int main()
{
	char s[100],d[100];
	int i;
	printf("enter a string:\n");
	scanf("%s",s);
	for(i=0;s[i]!=0;i++)
	{
		d[i]=s[i];
	}
	d[100]='\0';
	printf("%s\n",d);
}
