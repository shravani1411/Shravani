
#include<stdio.h>

int main()
{
	char s[]="shravani";
	char d[100];
//	char d[100]="";
	int i;
	for(i=0;s[i]!=0;i++)
	{
		d[i]=s[i];
	}
	d[100]='\0';
	printf("%s\n",d);
}
