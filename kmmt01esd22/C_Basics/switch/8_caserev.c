/* Input an alphabet. Output its case reverse.*/

#include<stdio.h>
int main()
{
	char c;
	printf("enter the character:\n");
	scanf("%c",&c);
	switch(c>='a'&&c<='z')
	{
		case 1:
			c=c-32;
			printf("%c\n",c);
			break;
		case 0:if(c>='A'&&c<='Z')
			{
			c=c+32;
			printf("%c\n",c);
			}
			else
			{
				printf("it is not alphabet\n");
			}
	}
}
