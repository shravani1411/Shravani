#include<stdio.h>
#include<string.h>
void mystrlwr(char s[])
{
	int i=0;
	while(s[i]!=0)
	{
		if(s[i]>=97&&s[i]<=122)
		{
			s[i]=s[i]-32;
		}
		i++;
	}
}

int main()
{
	char s[]="KErnEl";
	mystrlwr(s);
	printf("%s\n",s);
}
