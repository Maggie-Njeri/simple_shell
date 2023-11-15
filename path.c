#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * _which - Search for files in the current PATH.
 * @filename: The name of the file to search for.
 * @env_path: The PATH environment variable.
 *
 * Description: This function searches for the given filename
 * in the directories
 * specified in the PATH environment variable.
 */
void _which(const char *filename, const char *env_path)
{
	char *path_copy = strdup(env_path);
	char *token = strtok(path_copy, ":");

	while (token != NULL)
	{
		char *full_path = malloc(strlen(token) + strlen(filename) + 2);

		sprintf(full_path, "%s/%s", token, filename);

	if (access(full_path, F_OK) != -1)
	{
		printf("%s\n", full_path);
		free(full_path);
		free(path_copy);
	return;
	}

	free(full_path);
	token = strtok(NULL, ":");
	}

	free(path_copy);
	printf("%s not found in PATH\n", filename);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings representing the command-line arguments.
 * @envp: An array of strings representing the environment variables.
 *
 * Description: This program searches for files in the current PATH and prints
 * their full paths if found.
 *
 * Return: Always 0 (success).
 */
int main(int argc, char *argv[], char *envp[])
{
	if (argc < 2)
	{
		fprintf(stderr, "Usage: %s filename ...\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	char *path_env = getenv("PATH");

	for (int i = 1; i < argc; i++)
	{
		_which(argv[i], path_env);
	}

	return (0);
}
