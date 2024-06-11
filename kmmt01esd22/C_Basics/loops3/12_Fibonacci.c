/*Write a program to print the first n Fibonacci numbers.

  Eg., First 8 Fibonacci numbers are :
  1  1  2  3  5  8  13  21*/

#include<stdio.h>
int main()
{
	int p=1,c=1,f,temp,i;
	printf("%d  %d  ",p,c);
	for(i=3;i<=8;i++)
	{
		f=p+c;
		printf("%d  ",f);
		temp=f;
		f=c;
		c=temp;
		p=f;
	}
	printf("\n");
}
