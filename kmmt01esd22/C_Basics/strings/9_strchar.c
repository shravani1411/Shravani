#include<stdio.h>
#include<string.h>
int mystrrchar(char s[],char c)
{
	int i,a;
	for(i=0;s[i]!=0;i++)
	{
		if(s[i]==c)
		{
			a=i;
		}
	}
return a;
}


int main()
{
	int i;
	char c;
	char s[50]="kernel";
	printf("enter a character:\n");
	scanf("%c",&c);
	printf("%d\n",mystrrchar(s,c));
}
