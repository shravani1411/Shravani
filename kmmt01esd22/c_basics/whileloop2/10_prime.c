/* Write a program to find out if an integer entered by a user is a prime number or not*/

#include<stdio.h>
int main()
{
int num;
printf("enter a number:\n");
scanf("%d",&num);
int i=1,c=0;
while(i<=num)
{
if( num % i == 0)
{
c++;
}
i++;
}
if(c <= 2)
{
printf("Prime number\n");
}
else
{
printf("Not a prime number\n");
}
}
