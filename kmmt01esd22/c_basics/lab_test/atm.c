#include<stdio.h>
int main()
{
int a,b,c,d,e,f,g,h,i,j;
printf("enter the amount to withdraw:\n");
scanf("%d",&a);
if(a%50==0)
{
b=a/2000;
c=a%2000;
d=c/500;
e=c%500;
f=e/200;
g=e%200;
i=g/100;
j=g%100;
h=j/50;
printf("no. of 2000/- notes:%d\n",b);
printf("no. of 500/- notes:%d\n",d);
printf("no. of 200/- notes:%d\n",f);
printf("no. of 100/- notes:%d\n",i);
printf("no. of 50/- notes:%d\n",h);
}
else
printf("please enter the amount in denominations of 50 only\n");
}

