/*WAP Check if the 20th bit of a 32-bit integer is on or off?*/

#include<stdio.h>
int main()
{
int x,p=20;
printf("Enter number:\n");
scanf("%d",&x);
if(x& (0x1<<p))
printf("ON\n");
else
printf("OFF\n");
}
