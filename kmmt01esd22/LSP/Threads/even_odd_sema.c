#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>

void *odd(void *arg);
void *even(void *arg);
//char buffer[26];
sem_t empty,full;

int main() {
	int res;
	pthread_t a_thread,b_thread;
	void *thread_result;
	/* Create the full semaphore and initialize to 0 */
	sem_init(&full, 0, 0);

	/* Create the empty semaphore and initialize to BUFFER_SIZE (counting Semaphore) */
	sem_init(&empty, 0, 1);

	res = pthread_create(&a_thread, NULL, odd, NULL);
	if (res != 0) {
		perror("Thread creation failed");
		exit(EXIT_FAILURE);
	}

	res = pthread_create(&b_thread, NULL, even, NULL);
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

void *odd(void *arg) {
	int in = 1;
	while(in<=20)
	{
		// printf("%d",in);
		sem_wait(&empty);

		if(in%2!=0)
			printf("odd:%d\n",in);
		in++;
		sem_post(&full);
		sleep(1);
	}

	pthread_exit("exit");
}

void *even(void *arg) {
	int in=1;
	while(in<=20)
	{
		sem_wait(&full);
		if(in%2==0)
			printf("even:%d\n",in);
		in++;
		sem_post(&empty);
	}
	pthread_exit("exit");
}

