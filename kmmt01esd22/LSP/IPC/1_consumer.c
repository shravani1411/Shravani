#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <fcntl.h>

int main()
{
	int fd;
	char buffer[4096];
	ssize_t ret;

	/* Open the named pipe for reading */
	fd = open("abc_pipe", O_RDONLY);
	if (fd == -1) {
		perror("open");
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

}

