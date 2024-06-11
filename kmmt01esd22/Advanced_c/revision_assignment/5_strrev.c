/*5) "Write a program to reverse the words in a string.
  eg., input : Kernel Masters is best for embedded.
output : embedded for best is Masters Kernel."*/

#include<stdio.h>
void reverse(char *s);
void word(char *s);
int main()
{
	char s[100];
	printf("enter a string\n");
	scanf("%99[^\n]s",s);
	reverse(s);
	word(s);
	printf("%s\n",s);
}

void reverse(char s[])
{
	int i=0,t,j=0;
	for(i=0;s[i]!=0;i++);
	i=i-1;
	for(j=0;j<i;j++,i--)
	{
		t=s[i];
		s[i]=s[j];
		s[j]=t;
	}
}

void word(char s[])
{
	int d,t,i,j=0;
	for(i=0;s[i]>=0;i++)
	{
		if(s[i]==' '||s[i]==0)
		{
			d=i;
			for(i=i-1;i>0&&j<i;j++,i--)
			{
				t=s[i];
				s[i]=s[j];
				s[j]=t;
			}
			j=d+1;
			i=d+1;
		}
	}
}
