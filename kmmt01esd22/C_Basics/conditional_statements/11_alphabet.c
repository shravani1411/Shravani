//11) Read a character and print if it is alphabet or not.

#include <stdio.h>
int main()
{
	char c;
	printf("Enter a character: ");
	scanf("%c", &c);
	printf("%d\n",c);
	if(c>=65)
	{
		if(c<=90)
		{
			printf("%c is upper case alphabet\n", c);
		}
		else if(c>=97)
		{
			if(c<=122)
				printf("%c is lower case alphabet\n",c);
		}
	}
	else
	{
		printf("%c is not an alphabet\n",c);
	}
	return 0;
}
