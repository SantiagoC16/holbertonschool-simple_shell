
#include "shell.h"
/**
 * exec_ve - a
 * @argv: pointer to pointer
 * Return: b
 */

int exec_ve(char *argc, char **argv)
{

	pid_t hijo;
	int status = 0;

	hijo = fork();

	if (hijo < 0)
	{
		perror("ta muerto");
	}
	else if (hijo == 0)
	{
		execve(argc, argv, environ);
	}
	else
	{
		waitpid(hijo, &status, 0);
	}
	return (status);
}