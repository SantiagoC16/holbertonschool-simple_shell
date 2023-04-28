#include "shell.h"

/**
 * exec_ve - a
 * @argv: pointer to pointer
 * Return: b
 */

int exec_ve(char **argv)
{
	pid_t hijo;
	int statu = 0;

	hijo = fork();

	if (hijo < 0)
	{
		perror("ta muerto");
	}
	else if (hijo == 0)
	{
		execve(argv[0], argv, environ);
	}
	else
	{
		waitpid(hijo, &statu, 0);
	}
	return (statu);
}