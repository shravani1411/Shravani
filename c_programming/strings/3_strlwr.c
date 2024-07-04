
#include<stdio.h>

void strlwr(char s[]);

int main()
{
	char s[]="ShRaVaNi";
	strlwr(s);
	printf("%s\n",s);
}

void strlwr(char s[])
{
	int i;
	for(i=0;s[i]!=0;i++)
	{
		if(s[i]>=65&&s[i]<=90)
		{
			s[i]=s[i]+32;
		}
	}
//	printf("%s\n",s);
}
