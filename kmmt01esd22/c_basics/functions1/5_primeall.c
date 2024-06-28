/*5. "Write a program with a function that takes two integer arguments, and prints all prime numbers between those numbers using the prime number function written above.return type should be void.
  PrintAllPrimes - return type is void. Should use IsPrime() function written in Q3 to identify if given number is prime or not" */

#include<stdio.h>
void IsPrime()
{
	int i,j,s,e;
	printf("enter starting number & ending number:\n");
	scanf("%d\n%d",&s,&e);
	printf("prime numbers:\n");
	for(i=s;i<=e;i++)
	{
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				break;
			}
		}
		if(j==(i/2)+1)
		{
			printf("%d\n",i);
		}
	}
	return;
}

int main()
{
	IsPrime();
}
