/*WAP implement subtraction functionality with out using SUB('-') Operator.*/

#include<stdio.h>
int main()
{
int x,y,a;
printf("Enter the values:\n");
scanf("%d%d",&x,&y);
a=x+(~y+1);
printf("Subtraction:%d\n",a);
}
