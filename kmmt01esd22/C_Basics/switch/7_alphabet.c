/*Read a character and print if it is alphabet or not.*/

#include<stdio.h>
int main()
{
char ch;
printf("enter a character:\n");
scanf("%c",&ch);
switch(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
{
case 1:
printf("%c is alphabet\n",ch);
break;
case 0:
printf("%c is not alphabet\n",ch);
}
}

