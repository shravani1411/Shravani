#include<stdio.h>
#include<string.h>
void mystrncat(char s[],char d[],int n)
{
	int i,j;
	n=3;
	for(i=0;s[i]!=0;i++);
	for(j=0;j<n;j++)
	{
		s[i++]=d[j];
	}
}

int main()
{
	int n;	
	char s[100]="kernel";
	char d[100]="masters";
	mystrncat(s,d,n);
	printf("%s\n",s);
}
