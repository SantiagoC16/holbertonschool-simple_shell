#include "main.h"

/**
 * exec_ve - a
 * Return: b
 */

int exec_ve(void)
{
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
 *
 * pid_t pid;
 * pid = getpid();
 * _________________
 * pid_t ppid;
 * ppid = getppid();
 * _________________
 * fork()
 * return:
 * - pid of child in the parent
 * - 0 in the child
 * - -1 if unsuccessful
 *
 * int main(void)
 * {
 *	pid_t pid;
 *
 *	pid = fork();
 *	if (pid == -1)
 *		perror;
 *	else
 *		return 0;
 * }
 *__________________
 * wait
 * is in for the ppid
 * wait(something);
 *
 */
