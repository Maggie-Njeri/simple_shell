#include "shell.h"

/**
 * leggere_domande - is used to read the command
 * @size: size
 * @domande: is the command to be read
 */

void leggere_domande(char *domande, size_t size)
{
	if (fgets(domande, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			mc_fprint("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
		mc_fprint("Error while reading input.\n");
	exit(EXIT_FAILURE);
	}

	}

	domande[strcspn(domande, "\n")] = '\0';
}
