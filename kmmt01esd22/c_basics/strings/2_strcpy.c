#include<stdio.h>
#include<string.h>
void mystrcpy(char d[],char s[])
{
	int i=0;
	while(s[i]!=0)
	{
		d[i]=s[i];
		i++;
	}
	d[i]=s[i];
}

int main()
{
	char d[100]="";
	char s[100]="kernel";
	mystrcpy(d,s);
	printf("%s\n",d);
	printf("%s\n",s);
}
