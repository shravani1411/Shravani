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
	int i=1,n=0,c=0,d;
	for(n=0;s[n]!=0;n++);
	for(n=n-1;n>=0;n--)
	{
		if(s[n]>47&&s[n]<58)
		{
			d=s[n]-48;
			c=c+(d*i);
			//i=i*10;
		}
			i=i*10;

	}
	return c;
}	


