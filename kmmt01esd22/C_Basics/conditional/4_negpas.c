#include<stdio.h>
int main()
{
int a;
printf("enter a value\n");
scanf("%d",&a);
if(a>0)
{
printf("The no. is positive");
}
else if(0>a)
{
printf("The no. is negative");
}
else
{
printf("The no. is zero");
}
}
