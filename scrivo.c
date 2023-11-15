#include "shell.h"

/**
 * mc_fprint is used to print out the results
 * scrivo: is a pointer to store the results
 */

void mc_fprint(char *scrivo) 
{
        write(STDOUT_FILENO, scrivo, strlen(scrivo));
}
