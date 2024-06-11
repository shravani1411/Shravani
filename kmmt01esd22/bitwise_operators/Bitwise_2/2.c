
#include<stdio.h>
int main()
{
int x,y,z;
printf("Enter hex. no.:\n");
scanf("%x",&x);
y=x>>20&0x00000fff;
printf("%x\n",y);
z=x&0x000fffff;
printf("%x\n",z);
}
