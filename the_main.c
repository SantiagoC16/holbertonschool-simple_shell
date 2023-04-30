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
	char *str = NULL, **arr_cmd = NULL, *fpath = NULL, *path = NULL;

	while (1)
	{
		if (shell == 1)
		{
			printf("Type_Bitch: ");
		}
		getline_result = getline(&str, &length, stdin);
		if (getline_result == -1)
		{
			free(str);
			exit(1);
		}
		arr_cmd = tokenizer(str);
		path = _getenv("PATH");
		if (path == NULL)
		{
			free(str);
			perror("error");
		}
		fpath = _which(path, arr_cmd);
		if (fpath != NULL)
		{
			exec_ve(fpath, arr_cmd);	
		}
		else
		{
			perror("command not found");
		}
		for (cont = 0; arr_cmd[cont] != NULL; cont++) 
		{
			free(arr_cmd[cont]);
		}
		free(arr_cmd);
		free(arr_cmd[cont]);
		free(fpath);
		exit(EXIT_SUCCESS);
	}
	return (0);
}
