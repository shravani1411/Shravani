#include<stdio.h>
int main()
{
int n=4532,a,b,c,d,e;
a=(n%10)*1000;
b=((n/10)%10)%100;
c=((n/100)%10)%10;
d=(n/1000)%10;
e=a+b+c+d;
printf("%d",e);
}
