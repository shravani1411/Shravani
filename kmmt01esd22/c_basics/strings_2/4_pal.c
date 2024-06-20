#include<stdio.h>
#include<string.h>
int palindrom(char s[]);
int main()
{
	int c;
	char s[50];
	printf("Enter the string:\n");
	scanf("%s",s);
	c=palindrom(s);
	if(c){
		printf("Its a palindrom \n");
	}	
	else
	{
		printf("not a palindrom \n");
	}
}

int palindrom(char s[])
{
	int i,k=0,j,l;
	for(l=0;s[l]!='\0';l++);
//	printf("length:%d\n",l);
	for(i=0,j=l-1;i<=j;i++,j--)
	{
		if(s[i]==s[j])
		{
			k=1;
		}	
		else
		{
			break;
		}
	}
	if(k==1)
		return 1;
	else
		return 0;
}

