#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <fcntl.h>

void* thread_1_func(void* arg)
{
	int fd;
	char data [100];//= "Hello, world!";
	ssize_t ret;
	printf("Enter data for abc_pipe file\n");
	scanf("%99[^\n]s",data);
	/* Open the named pipe for writing */
	fd = open("abc_pipe", O_WRONLY);
	if (fd == -1) {
		perror("open");
		return NULL;
	}

	/* Write the data to the pipe */
	ret = write(fd, data, strlen(data));
	if (ret == -1) {
		perror("write");
	}

	/* Close the pipe */
	close(fd);

	return NULL;
}

void* thread_2_func(void* arg)
{
	int fd;
	char buffer[4096];
	ssize_t ret;

	/* Open the named pipe for reading */
	fd = open("abc_pipe", O_RDONLY);
	if (fd == -1) {
		perror("open");
		return NULL;
	}

	/* Read the data from the pipe */
	ret = read(fd, buffer, sizeof(buffer));
	if (ret == -1) {
		perror("read");
	} else {
		printf("Received data: %s\n", buffer);
	}

	/* Close the pipe */
	close(fd);

	return NULL;
}

int main()      //(int argc, char* argv[])
{
	pthread_t t1, t2;
	int ret;

	/* Create the t1 thread */
	ret = pthread_create(&t1, NULL, thread_1_func, NULL);
	if (ret != 0) {
		fprintf(stderr, "Error creating thread 1: %s\n", strerror(ret));
		return 1;
	}

	/* Create the t2 thread */
	ret = pthread_create(&t2, NULL, thread_2_func, NULL);
	if (ret != 0) {
		fprintf(stderr, "Error creating thread 2: %s\n", strerror(ret));
		return 1;
	}

	/* Wait for the threads to complete */
	pthread_join(t1, NULL);
	pthread_join(t2, NULL);

	return 0;
}
