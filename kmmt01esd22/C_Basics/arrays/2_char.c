/*Write the following program :
  Declare a character array without size.
  Initialize the array with characters of your name.
  Print your name using for loop.*/

#include<stdio.h>
int main()
{
	char name[]={'S','H','R','A','V','A','N','I'};
	char n;
	int i;
	printf("enter the character:");
	scanf("%c",&n);
	for(i=0;i<8;i++)
	{
		printf("%c",name[i]);
	}
	printf("\n");
}
