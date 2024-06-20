#include<stdio.h>
int main()
{
int n=4532,a,b,c,d;
d=(n/1000)%10;
c=(n/100)%10;
b=(n/10)%10;
a=n%10;
printf("%d\n%d\n%d\n%d", d,c,b,a);
}
