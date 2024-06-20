/*implement the following game in C so that computer always wins :
  Game is played between the computer and a single user. There are 21 match sticks, computer and user is allowed to take less than 5 sticks on each turn.The player who is forced to pick up the last stick is the loser.*/
#include<stdio.h>
int main()
{
	int d,c,n=21;
	printf("enter your choice\n");
	for(  ;n!=1; )
	{	
		printf("user::");
		scanf("%d",&c);
		if(c>0&&c<5)
		{
			d=5-c;
			printf("computer::%d\n",d);
			n=n-5;
		printf("remaining::%d\n",n);
		}
		else
			printf("enter value below 5 and above 4\n");
	}
	printf("computer is winner\n");
}


