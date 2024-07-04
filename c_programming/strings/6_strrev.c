
#include<stdio.h>

int main()
{
	int n,i,t,j,l;
//	printf("enter the string size:");
//	scanf("%d",&n);
	char s[18];
	printf("enter a string:");
	scanf("%s",s);
	for(l=0;s[l]!=0;l++);
	for(i=l-1,j=0;i>j;i--,j++)
	{
		t=s[i];
		s[i]=s[j];
		s[j]=t;
	}
	printf("%s\n",s);
}
