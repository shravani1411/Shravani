#include<stdio.h>
#include<string.h>
char *strchar(char s[],char c);
int main()
{
	char s[100];
	char *str;
	printf("Enter the string:\n");
	scanf("%99[^\n]s",s);
	char c;
	printf("Enter any character:\n");
	getchar();
	scanf("%c",&c);
	str=strchar(s,c);
	printf("The %c 's address is %p \n",c,str);
}
char *strchar(char s[],char c)
{
	int i=0,j=0;
	char *p=0;
	for(;*s;s++,i++);
	
	for(;i>j;j++)
	{
		if(*s==c)
		{
			return s;
		}
	s--;
	
	}
if(i==j)
	return p;
}

