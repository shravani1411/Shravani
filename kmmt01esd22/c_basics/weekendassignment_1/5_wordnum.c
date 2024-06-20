/*WAP to display the word expansion oif a number
  eg., Input : 789
Output : Seven Eight Nine*/
#include<stdio.h>
int main()
{
	char str[100];
	int i,a,k=1;
	printf("Enter a string:\n");
	scanf("%s",str);
	for(i=0;str[i]!=0;i++)
	{
		if(str[i]>=48&&str[i]<=57)
		{
			//printf("Enter a valid number:\n");
			
		}
		else
		{
		printf("Enter a valid number\n");
		k=0;
		}
	}
	for(i=0;(str[i]!=0)&&(k!=0);i++)
	{
		a=str[i]-48;
		switch(a)
		{
			case 1:printf("one ");
			       break;
			case 2:printf("two ");
			       break;
			case 3:printf("three ");
			       break;
			case 4:printf("four ");
			       break;
			case 5:printf("five ");
			       break;
			case 6:printf("six ");
			       break;
			case 7:printf("seven ");
			       break;
			case 8:printf("eight ");
			       break;
			case 9:printf("nine");
			       break;
		default:printf("please enter a number\n");
		}

	}	
//label:printf("\n");
}
