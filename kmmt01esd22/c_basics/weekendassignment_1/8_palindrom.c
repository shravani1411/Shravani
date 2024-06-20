/*Write a program that reads a string as input, and determines if the string can make a palindrome or not.

  eg., mmaad
  the string can be arranged as a palindrome

  eg., mmaadd
  the string can be  arranged as a palindrome

  eg., mmmaad
  the string cannot be arranged as a palindrome*/
#include<stdio.h>
int main()
{
	char s[100];
	int i,j,c=0,d,e=0,f=0;
	printf("enter string\n");
	scanf("%99[^\n]s",s);
	for(i=0;s[i]!=0;i++)
	{	d=0;
		c=0;
		for(j=0;s[j]!=0;j++)
		{
			if(s[i]==s[j])
				c++;
			else
				d++;
		}

		if(c==j-1)
		{
			printf("palindrome is possible\n");
			return 0;
		}
		if(d>0&&c==0)
			e++;
		if(c%2!=0)
			f++;
	}
	if(e+f>1)
		printf("palindrome is not possible\n");
	else
	printf("palindrome is possible\n");
	return 0;
}	

