//6) Write a program to count the number of digits in a number.

#include<stdio.h>
int count_digits(int n)
{
	static int c=0;
	if(n==0)
        {
          c++;
		return 1;
        }
	if(n>0)
	{
		count_digits(n/10);
		c++;
//	}
//	else
//	{
		return c;
	}
}

int main()
{
	int n,c=0;
	printf("enter the number:\n");
	scanf("%d",&n);
	c=count_digits(n);
	printf("total number of digits in [%d] are:%d\n",n,c);
	//printf("%d total number of digits\n",n,c);
	return 0;
}

