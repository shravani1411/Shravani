#include<stdio.h>
int stock;
int limit;
void sale();
void purchase();
int addstock(int item);
int substock(int item);
int main()
{
	int j=1;
	while(j==1){
		printf("Enter stock:\n");
		scanf("%d",&stock);
		printf("Enter limit:\n");
		scanf("%d",&limit);
		if(limit>=stock){
			j=0;
		}
		else{
			printf("Enter the stock below limit\n");
			j=1;
		}
	}
	j=1;
	while(j==1)
	{
		int i;
		printf("Enter 1)stock 2)sale 3)purchase 4)quit:\n");
		scanf("%d",&i);
		switch(i)
		{
			case 1:printf("The total stock is:%d\n",stock);
			       break;
			case 2:sale();
			       break;
			case 3:purchase();
			       break;
			case 4: j=0;
				break;
		}
	}
}

int addstock(int item)
{
stock=stock+item;
return stock;
}
int substock(int item)
{
stock=stock-item;
return stock;
}

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
			printf("sorry, stock is not available\n");
}

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
