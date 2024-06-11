#include<stdio.h>
int main()
{
char ch;
printf("Enter the character is:\n");
scanf("%c",&ch);
//printf("%c",ch);

ch>=97?(ch<=122?printf("%c it is a alphabet\n",ch):printf("%c it is not a alphbet\n",ch)):ch>=65?(ch<=90?printf("%c It is a alphbet\n",ch):printf("%c It is not alphabet\n",ch)):printf("%c It is not an alphabet\n",ch);
}
