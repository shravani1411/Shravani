/*Do the below assignment using do while loop.
  Write a program to input a number and count the digits in it.
  Eg.
  0 - number of digits 1
  12 – number of digits 2
  155 – number of digits 3*/

#include<stdio.h>
int main()
{
	int n,count=0;
	printf("Enter n digits:\n");
	scanf("%d",&n);
	int org_num = n;
	do
	{
		n=n/10;
		count++;
	}
	while(n>=1);
	//increasing count value to count last remain digit
	printf("%d - number of digits %d \n",org_num,count);
}
