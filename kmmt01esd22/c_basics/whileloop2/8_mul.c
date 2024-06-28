/*8. Write a program to multiply 2 numbers without using * operator.*/

#include <stdio.h>

int main()
{
	int n, b;
	int product = 0; 
	printf("Enter two integers:\n");
	scanf("%d%d",&n,&b);
	while(b != 0)
	{
		product += n;
		b--;
	}
	printf("Prouduct = %d\n", product);
	return 0;
}
