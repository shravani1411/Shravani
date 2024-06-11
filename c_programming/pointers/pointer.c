
#include<stdio.h>

int main()
{
int a=4;
int *p=0;
p=&a;
printf("%d\t%d\n",++*p,*p);
printf("%d\t%d\n",*p++,*p);
printf("%p\t%d\n",*(++p),*p);
printf("%p\t%d\n",*(p++),*p);

}
