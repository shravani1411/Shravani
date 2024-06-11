#include"../inc/market.h"
void sale()
{
	int item;
	printf("enter no. of items for selling:\n");
	scanf("%d",&item);
		if(stock>=item)
		{
			substock(item);
			printf("available stock:%d\n",stock);
		}
		else
			printf("sorry, stock is not available");
}
