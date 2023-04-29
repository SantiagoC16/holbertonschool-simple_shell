#include "shell.h"

/**
 * str_tok - tokenize
 * @line: is the input of the user
 * Return: the array of tokens
 */

char **tokenizer(char *line)
{
	char **tok = NULL;
	char *line_copy, *token = NULL, *delim = " \t", *token2 = NULL;
	int ntokens = 0, cont1 = 0;
	
	line_copy = strdup(line); 
	if (line_copy == NULL)
	{
		free(line);
		exit(1);
	}
	token = strtok(line_copy, delim);
	while (token != NULL)
	{
		ntokens++;
		token = strtok(NULL, delim); 
	}
	ntokens++;
	tok = malloc(sizeof(char *) * ntokens);
	if (tok == NULL)
		exit(1);
	token2 = strtok(line, delim);
	for (cont1 = 0; cont1 < ntokens -1; cont1++)
	{
		tok[cont1] = malloc(sizeof(char) * (strlen(token2) + 1));
		if (tok[cont1] == NULL)
		{
			free(tok);
			return (NULL);
		}
		strcpy(tok[cont1], token2);
		token2 = strtok(NULL, delim); 
	}
	tok[cont1] = NULL;
    free(line_copy);
	return (tok); 
}