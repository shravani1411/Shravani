#include<stdio.h>
int main()
{
char c,b,d;
int x,y,z,result;
scanf("%c\n%c\n%c",&c,&b,&d);
printf("%d\n%d\n%d",c,b,d);
x=c-'0';
y=b-'0';
z=d-'0';
result=x*100+y*10+z*1;
printf("one integer is:%d",result);
}
