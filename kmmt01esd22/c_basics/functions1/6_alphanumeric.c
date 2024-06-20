/*)"Write a function to determine if a character is alphanumeric or not and print the result in main function.
Hint: int fun_alpha_num(char c)"*/

#include<stdio.h>
char fun_alpha_num(char c)
{
	char x;
	if((c>96&&c<123)||(c>64&&c<91))
		x=1;
	else if(c>47&&c<58)
		x=0;
	else
		x=2;
	return x;
}
int main()
{

	char c,x;
	printf("enter a character\n");
	scanf("%c",&c);
	x= fun_alpha_num(c);
	if(x==1)
		printf("alphabet\n");
	else if(x==0)
		printf("number\n");
	else
		printf("not a alphabet or number\n");
	return 0;
}


