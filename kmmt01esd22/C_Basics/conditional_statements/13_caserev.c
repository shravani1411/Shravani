/*13) Input an alphabet. Output its case reverse.

eg., input: a
output: A

input: U
output: u

input: 4
output: not an alphabet */

#include<stdio.h>
int main()
{
	char c;
	printf("enter a character:");
	scanf("%c",&c);
	if(c>=65)
	{
		if(c<=90)
		{
			c=c+32;
			printf("%c\n",c);
		}
		else if(c>=97)
		{
			if(c<=122)
				c=c-32;
			printf("%c\n",c);
		}
	}
	else
	{
		printf("%c is not an alphabet\n",c);
	}
	return 0;
}
