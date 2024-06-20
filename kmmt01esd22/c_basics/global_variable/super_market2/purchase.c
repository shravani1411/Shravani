#include"header.h"
void purchase()
{
	int item,l,y=1,n=0,a;
	static int purchase=0,noofitemspurchased=0;
	printf("Enter number of items:\n");
	scanf("%d",&item);
	l=limit-s;
	if(l>=item)
	{
		addstock(item);
		printf("Available stock is:%d\n",s);
		purchase++;
		noofitemspurchased+=item;
	}
	else if(l<=item)
	{
		printf("The available stock is:%d,Give us %d and sell the remaining to others (1/0)",s,l);
		scanf("%d",&a);
		if(a==y){
			noofitemspurchased+=l;
				item=l;
			addstock(item);
			printf("Available stock is:%d\n",s);
			purchase++;
		}
		else if(a==n)
		{
			printf("Sorry");
	}
	}
		np=noofitemspurchased;
		purchased=purchase;
}

