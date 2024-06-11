#include<stdio.h>
int main()
{
int a;
printf("enter a value\n");
scanf("%d",&a);
if(a>0)
{
printf("%d",a);
}
if(0>a)
{
a=0-a;
printf("%d",a);
}
}
