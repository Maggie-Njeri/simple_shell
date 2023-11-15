#include "shell.h"

/**
 * execute_domande - Executes a command passed as a string.
 * @domande: The command to be executed.
 *
 * Description: This function forks a child process
 * to execute the given command.
 * It tokenizes the command string and uses execvp to execute the command.
 */
void execute_domande(const char *domande)
{
	pid_t bambino_pid;

	bambino_pid = fork();
	if (bambino_pid == -1)
	{
		mc_fprint("Error forking process.\n");
		exit(EXIT_FAILURE);
	}
	else if (bambino_pid == 0)
	{
		char *args[128];
		int arg_count = 0;
		char *token = strtok((char *)domande, " ");

		while
			(token != NULL)
			{
				args[arg_count++] = token;
				token = strtok(NULL, " ");
			}
		args[arg_count] = NULL;
		execvp(args[0], args);
			mc_fprint("Error executing command.\n");
		exit(EXIT_FAILURE);
	}

}
