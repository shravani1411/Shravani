/*WAP implement addition functionality with out using ADD('+') Operator.*/

#include<stdio.h>
int main()
{
int x,y;
printf("Enter the values:\n");
scanf("%d%d",&x,&y);
printf("Addition:%d\n",x-(~y)-1);
}
