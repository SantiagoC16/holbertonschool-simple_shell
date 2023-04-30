
#include "shell.h"
/**
 * exec_ve - a
 * @argv: pointer to pointer
 * @argc: argument counter
 * Return: b
 */

int exec_ve(char **argv)
{

	pid_t hijo;
	int status = 0;
	char *path = NULL, *genv = NULL;

	hijo = fork();
	if (hijo < 0)
	{
		perror("fork failed");
	}
	else if (hijo == 0)
	{
		genv = _getenv("PATH");
		path = _which(genv, argv);
		if (execve(path, argv, environ) == -1)
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
