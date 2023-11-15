#include "shell.h"

/*
 * @main: - Entry point of the simple shell program.
 * Description: function serves as the main entry point for the simple shell.
 * It enters into loop, displays prompt, reads user input,& executes commands.
 *
 * @domande: is the string to be worked
 *
 * Return: Always 0 (success).
 */

int main(void)
{
	char domande[120];

	while (true)
	{
		display_prompt();
		leggere_domande(domande, sizeof(domande));
		execute_domande(domande);

	}

	return (0);
}
