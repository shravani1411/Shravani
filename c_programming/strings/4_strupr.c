
#include<stdio.h>

void strupr(char s[]);

int main()
{
	char s[100];
	printf("enter a string:");
	scanf("%s",s);
	strupr(s);
	printf("%s\n",s);
}

void strupr(char s[])
{
	int i;
	for(i=0;s[i]!=0;i++)
	{
		if(s[i]>=97&&s[i]<=122)
		{
			s[i]=s[i]-32;
		}
	}
//	printf("%s\n",s);
}
