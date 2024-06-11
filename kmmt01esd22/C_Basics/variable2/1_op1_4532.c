#include<stdio.h>
int main()
{
int n=4532,a,b,c,d;
a=n%10;
b=(n/10)%10;
c=(n/100)%10;
d=(n/1000)%10;
printf("%d\n%d\n%d\n%d", a,b,c,d);
}
