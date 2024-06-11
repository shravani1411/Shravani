#include<stdio.h>
#include<string.h>
void mystrncpy(char d[],char s[],int n)
{
	int i;
	n=3;
	for(i=0;i<n;i++)

	{
		d[i]=s[i];
	}
}

int main()
{
	int n;
	char s[100]="kernel";
	char d[100]="masters";
	mystrncpy(d,s,n);
	printf("%s\n",d);
}
