/*2. Write the following program :
  Declare a character array without size.
  Initialize the array with characters of your name.
  Print your name using for loop.*/

#include<stdio.h>
int main()
{
	char name[]={'S','H','R','A','V','A','N','I'};
	char n;
	int i,s;
	s=sizeof(name)/sizeof(name[0]);
	for(i=0;i<s;i++)
	{
		printf("%c",name[i]);
	}
	printf("\n");
}
