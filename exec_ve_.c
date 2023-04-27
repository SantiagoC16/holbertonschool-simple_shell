#include "shell.h"

/**
 * exec_ve - a
 * 
 * Return: b
 */

int exec_ve(void)
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
		execve();
		return 0;
	}
	else
	{
		waitpid(hijo, )
	}
	return (0);
	
}



/**
 * argc - argv
 *
 * argc - will be the number of token that we will get from strtokr
 * argv - will be the tokens and its content
 *
 * int acav(int token, char **tok)
 *
 * ________________
 * execve(path, argv ,environ)
 * exemplo argv: argv[] = {"/bin/ls", "-l", NULL}
 * int val = execve(argv[0](<-path), argv, NULL)
 *
 * execve(tok[0], tok ,environ)
 * exemplo argv: argv[] = {"/bin/ls", "-l", NULL}
 * int val = execve(argv[0](<-path), argv, NULL)
 * 
 * int i = 0;
 * for (; environ[i]; i++)
 * printf("%s", environ[i]);
 */
