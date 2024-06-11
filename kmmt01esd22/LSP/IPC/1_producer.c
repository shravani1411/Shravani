#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <fcntl.h>

int main()
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
	}

	/* Write the data to the pipe */
	ret = write(fd, data, strlen(data));
	if (ret == -1) {
		perror("write");
	}

	/* Close the pipe */
	close(fd);
}
