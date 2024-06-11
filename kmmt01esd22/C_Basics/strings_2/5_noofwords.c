#include<stdio.h>
int word(char s[]);
int main()
{
	char s[100];
	int c;
	printf("enter first strng\n");
	scanf("%99[^\n]s",s);
	c=word(s);
	printf("%d\n",c);
}

int word(char s[])
{
	int i,n=0,j=0,c=0;
	for(i=0;s[i]!=0;i++)
	{
		for( ;(s[i]>96&&s[i]<123)||(s[i]>64&&s[i]<91)||(s[i]>47&&s[i]<58);i++,n++);		
		if(n!=0)		
			c=c+1;	
		n=0;
	}
	return c;
}	

