#include<stdio.h>
#include<string.h>
void mystrreplace(char s[],char c1,char c2)
{
	int i;
	for(i=0;s[i]!=0;i++)
	{
		if(s[i]==c1)
		{
			s[i]=c2;
		}
	}
}


int main()
{
	int i;
	char c1,c2;
	char s[50]="kernel";
	printf("enter a character:\n");
	scanf("%c",&c1);
	printf("enter a character to replace:\n");
	getchar();
	scanf("%c",&c2);
	mystrreplace(s,c1,c2);
	printf("%s\n",s);
}
