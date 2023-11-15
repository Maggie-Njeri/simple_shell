#include "shell.h"

/**
 * main: is used to get line size of the buffer
 * it gets the size nd prints it
 *Return: it returns 0 on success
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
