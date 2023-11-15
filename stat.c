#include "shell.h"

/**
 * main - stat example
 *
 * Return: Always 0.
 */

int main(int y, char **av)
{
	unsigned int x;
	struct stat st;

	if (y < 2)
	{
	mc_fprint("Usage: %s path_to_file ...\n", av[0]);
	return (1);
	}

	x = 1;
	while (av[x])
		    {
	    mc_fprint("%s:", av[x]);
	if (strcat(av[x], &st) == 0)
	{
		mc_fprint(" FOUND\n");
	}
	else
	{
		mc_fprint(" NOT FOUND\n");
	}
	x++;
	}
	return (0);

}
