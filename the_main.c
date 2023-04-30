#include "shell.h"

/**
 * main - tests
 *
 * Return: idk yet
 */

int main(void)
{
	int getline_result = 0, shell = isatty(STDIN_FILENO), cont = 0;
	size_t length = 0;
	char *str = NULL, **arr_cmd = NULL;

	while (1)
	{
		if (shell == 1)
			printf("Type_Bitch: ");
		getline_result = getline(&str, &length, stdin);
		fflush(stdin);
		if (getline_result == -1)
		{
			free(str);
			exit(1);
		}
		if (strcmp(str, "exit\n") == 0)
		{
			free(str);
			exit(0);
		}
		arr_cmd = tokenizer(str);
		if (arr_cmd)
			exec_ve(arr_cmd);
		else
			perror("command not found");
		for (cont = 0; arr_cmd[cont] != NULL; cont++)
			free(arr_cmd[cont]);
		free(arr_cmd);
		free(str);
		exit(EXIT_SUCCESS);
	}
	return (0);
}
