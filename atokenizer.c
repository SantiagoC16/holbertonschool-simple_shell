#include "shell.h"

/**
 * tokenizer - tokenize
 * @line: is the input of the user
 * Return: the array of tokens
 */

char **tokenizer(char *line)
{
	char **tok = NULL;
	char *line_copy, *token = NULL, *token2 = NULL;
	int ntokens = 0, cont1 = 0, cont2 = 0;

	line_copy = strdup(line);
	if (line_copy == NULL)
		return (NULL);
	token = strtok(line_copy, " \t\n");
	while (token != NULL)
	{
		ntokens++;
		token = strtok(NULL, " \t\n");
	}
	ntokens++;
	tok = malloc(sizeof(char *) * ntokens);
	if (tok == NULL)
	{
		free(line_copy);
		return (NULL);
	}
	token2 = strtok(line, " \t\n");
	for (cont1 = 0; cont1 < ntokens - 1; cont1++)
	{
		tok[cont1] = malloc(sizeof(char) * (strlen(token2) + 1));
		if (tok[cont1] == NULL)
		{
			for (cont2 = 0; cont2 < cont1; cont2++)
			{
				free(tok[cont2]);
			}
			free(tok);
			free(line_copy);
			return (NULL);
		}
		strcpy(tok[cont1], token2);
		token2 = strtok(NULL, " \t\n");
	}
	tok[cont1] = NULL;
	free(line_copy);
	return (tok);
}
