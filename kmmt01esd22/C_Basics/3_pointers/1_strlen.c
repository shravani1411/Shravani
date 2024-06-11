/* 1) int strlen(char s[]);
 */
#include<stdio.h>
int mystrlen(char str[]);
int main()
{
	char str[10]="kernel";
	int l;
	l=mystrlen(str);
	printf("%d\n",l);
}
int mystrlen(char str[])
{
	int i=0;	
	while(*str)
	{
		i++;
		str++;
	}
	return i;
}
