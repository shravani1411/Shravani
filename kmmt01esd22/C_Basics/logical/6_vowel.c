/*Read a character and print if it is vowel or not.*/

#include<stdio.h>
int main()
{
	char c;
	printf("enter a character:\n");
	scanf("%c",&c);
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
	{
		printf("%c is a vowel\n",c);
	}
	else
	{
		printf("%c is not an vowel\n",c);
	}
}
