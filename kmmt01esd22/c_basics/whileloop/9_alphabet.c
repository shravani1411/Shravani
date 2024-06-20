/*Read n number of characters as input, and print if each character is alphabet or not.*/

#include<stdio.h>
int main()
{
	int i,n;
	printf("number of characters\n");
	scanf("%d",&n);
	char ch;
	i=1;
	while(i<=n)
	{
	printf("enter the character:\n");
	getchar();
	scanf("%c",&ch);
		if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
			printf("it is an alphabet\n");
		else
			printf("it is not an alphabet\n");
		i++;
	}
}
