#include <stdio.h>
#include <signal.h>
#include <sys/syscall.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <pthread.h>
char buffer[5];

void prod_sig(int sig)
{
	int i=0;
	while(i<5)
	{
		buffer[i]='A'+i;
		i++;
	}
	//for(i=0;i<5;i++)
	printf("producer:%s\n",buffer);
	syscall(SYS_tkill,(int)getpid()+2,SIGUSR2);
}

void cons_sig(int sig)
{
	int i=0;
	char data[5];
	while(i<5)
	{
		data[i]=buffer[i];
		i++;
	}
	printf("consumer:%s\n",buffer);
	syscall(SYS_tkill,(int)getpid()+1,SIGUSR1);
}

void *producer(void *arg);
void *consumer(void *arg);
int counter = 0;
int main() {
	int res;
	pthread_t a_thread,b_thread;
	void *thread_result;
	res = pthread_create(&a_thread, NULL, producer, NULL);
	if (res != 0) {
		perror("Thread creation failed");
		exit(EXIT_FAILURE);
	}
	res = pthread_create(&b_thread, NULL, consumer, NULL);
	if (res != 0) {
		perror("Thread creation failed");
		exit(EXIT_FAILURE);
	}
	printf("Wait for pthread_join\n");
	res = pthread_join(a_thread, &thread_result);
	if (res != 0) {
		perror("Thread join failed");
		exit(EXIT_FAILURE);
	}
	res = pthread_join(b_thread, &thread_result);
	if (res != 0) {
		perror("Thread join failed");
		exit(EXIT_FAILURE);
	}
	printf("Thread joined\n");
	exit(EXIT_SUCCESS);
}

void *producer(void *arg) {
	int in = 0;
	char ch='A';
	signal(SIGUSR1,prod_sig);
	pause();
	while(1)
	{
		pause();
	}
	pthread_exit("exit");
}

void *consumer(void *arg) {
	int out = 0;
	char data[5];
	signal(SIGUSR2,cons_sig);
	syscall(SYS_tkill,(int)getpid()+1,SIGUSR1);
	while(1)
	{
		pause();
	}
	pthread_exit("exit");
}

