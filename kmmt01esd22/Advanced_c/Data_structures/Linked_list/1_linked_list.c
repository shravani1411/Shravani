
#include<stdio.h>
#include<stdlib.h>
#include"1_header.h"
std *creatnode()
{
	std *new = (std *)malloc(sizeof(std));
	printf("Enter ID & Name:\n");
	scanf("%d",&new->ID);
	scanf("%s",new->name);
	new->next=NULL;
	return new;
}

void printll(std *p)
{
	while(p)
	{
		printf("%d\t%s\n",p->ID,p->name);
		p=p->next;
	}
}

int main()
{
	std *H=NULL, *N=NULL, *L=NULL;
	char ch;
	while(1)
	{
		N=creatnode();
		if(!H)
		{
			H=N;
		}
		else
		{
			L->next=N;
		}
		L=N;
		printf("Want to create another node?(y/n)\n");
		getchar();
		scanf("%c",&ch);
		if(ch=='n')
			break;
	}
	printll(H);
}
