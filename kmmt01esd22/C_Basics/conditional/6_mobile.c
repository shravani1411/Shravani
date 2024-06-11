#include<stdio.h>
int main()
{
int call,a,cost=250;
printf("enter values:");
scanf("%d",&call);
if(call<=100)
{
printf("%d\n",cost);
}
else if(call>100)
{
a=cost+(1.25*(call-100));
printf("%d\n",a);
}
return 0;
}
