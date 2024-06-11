/*1) "Write a trim() function,that will remove the leading and trailing spaces from a string.
eg., Input : ""    str  str   ""
Output : ""str str"""*/

#include<stdio.h>
int main()
{
	char s[100];
	int i,j;
	printf("enter string\n");
	scanf("%99[^\n]s",s);
	for(i=0;s[i]!=0;i++)
	{    if(s[0]==32)
		{
			for(j=0;s[j]!=0;j++)
			{
				s[j]=s[j+1];
			}
		}
		else if(s[i]==32&&s[i-1]==32)
		{
			j=i;
			for(;s[j]!=0;j++)
			{
				s[j]=s[j+1];
			}
			i=i-1;
		}
	}
	printf("%s\n",s);
}
