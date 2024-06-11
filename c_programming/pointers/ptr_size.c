
#include<stdio.h>

int main()
{
char a='x',*p=&a;
int b=43,*p1=&b;
float c=1.2,*p2=&c;
double d=123, *p3=&d;
printf("%lu\t%lu\n",sizeof(p),sizeof(*p));
printf("%lu\t%lu\n",sizeof(p1),sizeof(*p1));
printf("%lu\t%lu\n",sizeof(p2),sizeof(*p2));
printf("%lu\t%lu\n",sizeof(p3),sizeof(*p3));

}
