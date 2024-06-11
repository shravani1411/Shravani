#include"header.h"
void sale()
{
	int item,y=1,n=0,a;
	static int sale=0,visit=0,noofitemssold=0;
	printf("Enter number of items for selling:\n");
	scanf("%d",&item);
	if(s>=item)
	{
		substock(item);
		printf("Available stock:%d\n",s);
		sale++;
		noofitemssold+=item;
	}
	else if(s<=item){
		printf("The available stock is:%d,Take this from us and buy the remaining in another shop(1/0):\n",s);
		scanf("%d",&a);
		if(a==y)
{
			noofitemssold+=s;
	item=s;
			substock(item);
			printf("Available stock is:%d\n",s);
			sale++;
		}
		else if(a==n)
		{
			printf("Sorry");
		}
}
		ns=noofitemssold;
		sold=sale;
		visit++;
		v=visit;
}

