/*Write a program to find the sum of first n serial numbers.
eg., input : 5
output: 1+2+3+4+5 = 15*/

#include<stdio.h>
int main()
{
int i=1,a,sum=0;
printf("enter the number:\n");
scanf("%d",&a);
while(i<=a)
{
  sum=sum+i;
    i++;
}
printf("%d\n",sum);
return 0;
}

