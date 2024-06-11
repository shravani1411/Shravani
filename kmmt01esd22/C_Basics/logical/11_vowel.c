/*Read a character and print if it is vowel or not.*/

#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the character:\n");
	scanf("%c",&ch);
	(ch == 'a'|| ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'u')?printf("%c It is a vowel\n",ch):printf("%c It is not vowel\n",ch);
}
