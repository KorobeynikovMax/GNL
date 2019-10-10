#include <stdio.h>
#include "get_next_line.h"

int main()
{
	int fd;
	char *s;
	int ret;

	fd = open("test1", O_RDONLY);
	if (fd < 0)
		printf("fd < 0!");
	while ((ret = get_next_line(fd, &s)) > 0)
	{
		printf("Hello, get_next_line=%d\n", ret);
		printf("line=%s\n", s);
		free(s);
	}
	free(s);
	close(fd);
	return (0);
}