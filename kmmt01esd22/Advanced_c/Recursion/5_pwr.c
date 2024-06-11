//5) Write a program to find the power of a number( x to the power of n = x * x * x * x....n times)

#include<stdio.h>

int power_function(int base,int power);

int main()
{
	int base,power;
	printf("Enter the base value :\n");
	scanf("%d",&base);
	printf("Enter the power value :\n");
	scanf("%d",&power);
	int x = power_function(base,power);
	printf("Power of n : %d\n",x);

}

int power_function(int base,int power)
{
	if(power != 0)
		return base * power_function(base,(power-1));
	else
		return 1;
}
