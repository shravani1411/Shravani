//7) Implement string length function using recursion.

#include <stdio.h>
int stringLength(char str[])
{
	static int i=0,j=0;
	if(str[j]!=0)
	{
		i++;
		stringLength(++str);
	}
	return i;
}

int main()
{
	char str[100];
	int l=0;
	printf("Enter a string:\n");
	scanf("%s",str);
	l=stringLength(str);
	printf("the string length is: %d\n",l);
}
