#include<stdio.h>
int main()
{
int l,b,area,sum,p;
printf("enter length width values:\n");
scanf("%d\n%d", &l, &b);
area=l*b;
sum=l+b;
p=2*sum;
printf("area of the perimeter is:%d\n", area);
printf("rectangle of the perimeter is:%d\n", p);
return 0;
}
