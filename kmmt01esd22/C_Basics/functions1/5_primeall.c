/*"Write a program with a function that takes two integer arguments, and prints all prime numbers between those numbers using the prime number function written above.return type should be void.
  PrintAllPrimes - return type is void. Should use IsPrime() function written in Q3 to identify if given number is prime or not" */

#include<stdio.h>
void IsPrime()
{
	int i,j,m,n;
	scanf("%d\n%d",&m,&n);
	for(i=m;i<=n;i++)
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
			printf("prime:%d\n",i);
		}
	}
	return;
}

int main()
{
	int i,n;
	IsPrime();
}
