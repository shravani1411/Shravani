/*C program to check whether a character is vowel or consonant using switch statement*/

#include<stdio.h>
int main()
{
	char ch;
	printf("enter the character:\n");
	scanf("%c",&ch);
	if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
	{
		switch(ch)
		{
			case 'A':
				printf("%c is a vowel\n",ch);
				break;
			case 'E':
				printf("%c is a vowel\n",ch);
				break;
			case 'I':
				printf("%c is a vowel\n",ch);
				break;
			case 'O':
				printf("%c is a vowel\n",ch);
				break;		
			case 'U':
				printf("%c is a vowel\n",ch);
				break;
			case 'a':
				printf("%c is a vowel\n",ch);
				break;
			case 'e':
				printf("%c is a vowel\n",ch);
				break;
			case 'i':
				printf("%c is a vowel\n",ch);
				break;
			case 'o':
				printf("%c is a vowel\n",ch);
				break;
			case 'u':
				printf("%c is a vowel\n",ch);
				break;
			default:
				printf("it is consonant\n");
		}
	}
	else
		printf("it is not alphabet\n");
}
