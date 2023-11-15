#include "shell.h"

/**
 * main: is used to get the size of buffer
 * x is the pointer
 */

int main(void)
{
	size_t x = 10;
	char *buf = malloc(sizeof(char) * x);

	mc_fprint("nome");
	getline(&buf, &x, stdin);

	mc_fprint("nome is  buffer size is %u\n", buf, x);

	free(buf);

	return (0);
}
