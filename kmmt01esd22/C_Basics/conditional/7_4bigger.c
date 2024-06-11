#include<stdio.h>
int main()
{
int a,b,c,d;
printf("enter a,b,c,d values\n");
scanf("%d%d%d%d",&a,&b,&c,&d);
if(a>b)
{
if(a>c)
if(a>d)
printf("%d is bigger\n",a);
}
else if(b>c)
{
if(b>a)
if(b>d)
printf("%d is bigger\n",b);
}
else if(c>d)
{
if(c>a)
if(c>b)
printf("%d is bigger\n",c);
}
else
printf("%d is bigger",d);
}
