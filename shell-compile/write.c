#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
int main() {
	int fd = open("1.txt", O_WRONLY|O_CREAT, 0777);
	int ret = write(fd, "Lol\n", 4);
	return 0;

}
