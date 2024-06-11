/*Write a function to return the product of two numbers without using * operator.*/

#include<stdio.h>
int product(int x,int y)
{
	int p=0,a,b;
	printf("enter two numbers:\n");
	scanf("%d%d",&a,&b);
	while(b!=0)
	{
		p+=a;
b--;
	}
	return p;
}
      
int main()
{
	int m,x,y;
	m=product(x,y);
	printf("%d\n",m);
}


