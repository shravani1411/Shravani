/*7. Write a program to input a number and count the digits in it.
  Eg.
  0 - number of digits 1
  12 – number of digits 2
  155 – number of digits 3*/

#include <stdio.h>
int main() 
{
	int count = 0,n;
	printf("Enter an integer:\n");
	scanf("%d", &n); 	
	do
	{
		n=n/10;
		count++;
	}
	while (n != 0);
	printf("Number of digits: %d\n", count);
}
