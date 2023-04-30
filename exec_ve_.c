
#include "shell.h"
/**
 * exec_ve - a
 * @argv: pointer to pointer
 * @argc: argument counter
 * Return: b
 */

int exec_ve(char *argc, char **argv)
{

	pid_t hijo;
	int status = 0;

	hijo = fork();
	if (hijo < 0)
	{
		perror("fork failed");
	}
	else if (hijo == 0)
	{
		if (execve(argc, argv, environ) == -1)
		{
			perror("execve failed");
			exit(1);
		}
	}
	else
	{
		waitpid(hijo, &status, 0);
	}
	return (status);
}
