
#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

int data=11;

void *inc(void *ignore)
{
	while(data <=10)
	{
		printf("Before update data: %d in %s\n",data,__func__);
		sleep(1);
		data++;
		printf("After  update data: %d in %s\n",data,__func__);
	}
	pthread_exit(0);
}

void *dec(void *ignore)
{
	printf("dec is called.............\n");
	while(data > 0)
	{
		printf("Before update gData: %d in %s\n",data,__func__);
		sleep(1);
		data--;
		printf("After  update gData: %d in %s\n",data,__func__);
	}
	pthread_exit(0);
}


int main(void)
{
	pthread_t t1, t2;

	pthread_create(&t1, NULL, inc, NULL);
	pthread_create(&t2, NULL, dec, NULL);
	pthread_join(t1,NULL);
	pthread_join(t2,NULL);

	printf("Shared data value is : %d\n", data);
	return 0;
}

