/*Write a program to find the factorial of a given number.
N! = n * n-1 * n-2 * …. 2 * 1
eg., input: 5
output: 1*2*3*4*5* = 120*/

#include<stdio.h>
int main()
{
int i,a=1;
printf("enter the number:\n");
scanf("%d",&i);
while(i!=0)
{
  a=a*i;
    --i;
}
printf("%d\n",a);
return 0;
}

