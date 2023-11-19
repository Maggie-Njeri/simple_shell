#include "shell.h"

/**
 * mc_fprint is used to print out the results
 * it is used as a substitute for printf
 * @scrivo: is a pointer to store the results
 * main: is used to start the function
 */

void mc_fprint(char *scrivo)
{
	write(STDOUT_FILENO, scrivo, strlen(scrivo));
}
