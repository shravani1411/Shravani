#include<stdio.h>
#include<string.h>
int mystrchar(char s[],char c)
{
	int i,a;
	for(i=0;s[i]!=0;i++)
	{
		if(s[i]==c)
		{
			return i;
		}
	}
}


int main()
{
	int i;
	char c;
	char s[50]="kernel";
	printf("enter a character:\n");
	scanf("%c",&c);
	printf("%d\n",mystrchar(s,c));
}
