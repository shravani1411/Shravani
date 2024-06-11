#include<stdio.h>
#include<string.h>
void mystrrev(char s[],int n);
int main()
{
	int i,n;
	printf("enter size:\n");
	scanf("%d",&n);
	char s[n];
	printf("enter the character:\n");
	scanf("%s",s);
/*	for(i=0;i<n;i++)
	{
	//	getchar();
		scanf(" %[^\n]c",&s[i]);
	}*/
mystrrev(s,n);
printf("reverse:\n");
for(i=0;i<n;i++)
{
printf("%c\n",s[i]);
}
}

	void mystrrev(char s[],int n)
	{
		int i,j,temp;
		for(i=n-1,j=0;i>=0&&j<n/2;i--,j++)
		{
			temp=s[i];
			s[i]=s[j];
			s[j]=temp;
		}
	}

