#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>

void *thread_function(void *arg);
//int run_now = 50;
char message[] = "Hello World";

int main() {
	int res;
	pthread_t a_thread;
	void *thread_result;
	int print_count1 = 1;
	res = pthread_create(&a_thread, NULL, thread_function, (void *)message);
	if (res != 0) {
		perror("Thread creation failed");
		exit(EXIT_FAILURE);
	}
	while(print_count1 <= 50) {
		if (print_count1%2 == 0) {
			printf("even:%d\n",print_count1);
	//		run_now = 2;
		}
		print_count1++;
	//	else {
			sleep(1);
	//	}
	}
	printf("\nWaiting for thread to finish...\n");
	res = pthread_join(a_thread, &thread_result);
	if (res != 0) {
		perror("Thread join failed");
		exit(EXIT_FAILURE);
	}
	printf("Thread joined\n");
	exit(EXIT_SUCCESS);
}

void *thread_function(void *arg) {
	int print_count2 = 1;
	while(print_count2 <= 50) {
		if (print_count2%2 == 1) {
			printf("odd:%d\n",print_count2);
	//		run_now = 1;
		}
		print_count2++;
	//	else {
			sleep(1);
	//	}
	}
	pthread_exit("Thank you for the cpu time");
	//    sleep(3);
}


