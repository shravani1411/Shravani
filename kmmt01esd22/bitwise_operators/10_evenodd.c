/*WAP whether a number is ODD or EVEN using bitwise.*/

#include<stdio.h>
int main()
{
	int x;
	printf("Enter a number:\n");
	scanf("%x",&x);
	if(x& 0x01)
		printf("Odd\n");
	else
		printf("Even\n");
}
