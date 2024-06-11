/*Write Power calculation using multiplication(*)  operator. Do not use library functions.*/

#include<stdio.h>
int main()
{
int mul=1,a,b,i=1;
printf("Enter a,b values:\n");
scanf("%d%d",&a,&b);
while(i<=b)
{
mul *=a;
i++;
}
printf("%d\n",mul);
}
