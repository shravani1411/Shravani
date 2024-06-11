
#include<stdio.h>
#include<sys/types.h>
#include<stdlib.h>
//#include<unist.h>
#include<sys/wait.h>

char buffer[5];
int counter=0;

sem_t empty=5,full=0;

void producer(void)
{
	int in=0;
	while(1)
	{
		sem_wait (&empty);
		buffer[in] = 'A';
		in = (in+1)%counter;
		sem_post (&full);
	}
}

void consumer (void)
{
	int out=0; char temp[10];
	while(1)
	{
		sem_wait (&full);
		temp[out] = buffer[out];
		out = (out+1)%counter;
		sem_post(&empty);
	}
}

int main()
{

	printf("producer:%d\n,consumer:%d\n",producer(),consumer());

}
