
#include<stdio.h>
int num(char s[]);
int main()
{
	char s[100];
	int c;
	printf("enter strng\n");
	scanf("%99[^\n]s",s);
	c=num(s);
	printf("%d\n",c);
}

int num(char s[])
{
	int i,n=1,c=0,d;
	for(i=0;s[i]!=0;i++);
	for(i=i-1;i>=0;i--)
	{
		if(s[i]>=48&&s[i]<=57)
		{
			d=s[i]-48;
			c=c+(d*n);
		}
			n=n*10;
	}
	return c;
}	


