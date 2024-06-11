#include<stdio.h>
int main()
{
int a,b;
char op;
printf("enter a,b values:\n");
scanf("%d%d",&a,&b);
printf("enter any one of the operator +,-,*,/,%%:\n");
getchar();
scanf("%c",&op);
if(op=='+')
{
printf("%d+%d=%d\n",a,b,a+b);
}
else if(op=='-')
{
printf("%d-%d=%d\n",a,b,a-b);
}
else if(op=='*')
{
printf("%d*%d=%d\n",a,b,a*b);
}
else if(op=='/')
{
printf("%d/%d=%d\n",a,b,a/b);
}
else if(op=='%')
{
printf("%d%%%d=%d\n",a,b,a%b);
}
else
{
printf("entered number is invalid");
}
}
