#include<stdio.h>
int main()
{
int r;
float a,pi=3.14,c;
printf("enter the r value:\n");
scanf("%d", &r);
a=pi*r*r;
c=2*pi*r;
printf("area of circle is:%f\n",a);
printf("perimeter of circle is:%f\n",c);
return 0;
}
