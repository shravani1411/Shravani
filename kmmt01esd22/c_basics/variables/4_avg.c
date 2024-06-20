#include<stdio.h>
int main()
{
int a,b,c,d,sum;
float avg;
printf("enter 4 no.s:\n");
scanf("%d\t%d\t%d\t%d",&a, &b, &c, &d);
sum=a+b+c+d;
avg=sum/4;
printf("avg. of 4 no.s:%f",avg);
return 0;
}
