#include"../inc/market.h"
void purchase()
{
	int item,l;
	printf("enter no. of items:\n");
	scanf("%d",&item);
	l=limit-stock;
	if(item<=l)
	{
		addstock(item);
		printf("available stock is:%d\n",stock);
	}
	else
		printf("there is no enough space\n");
}
