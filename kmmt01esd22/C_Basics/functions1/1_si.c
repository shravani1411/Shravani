/*Write a function that takes principle, rate of interest and time in months as input arguments, and returns the total amount to be repayed, after calculation of simple interest.*/

#include<stdio.h>
float simple_interest(int p,int n,float r)
{
	float si;
	si=p*n*r/100;
	return si;
}
int main()
{
	int p,n,total;
	float r,si;
	//simple=p*n*r;
	//n=n/12.0
	scanf("%d%d%f",&p,&n,&r);
	si=simple_interest(p,n,r);
	total=si+p;
	printf("si=%f\n",si);
	printf("total=%d\n",total);
}


