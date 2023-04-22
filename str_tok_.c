#include "main.h"

/**
 * str_tok - tokenize
 * @line: is the input of the user
 * Return: the array of tokens
 */

char **str_tok(char *line)
{
	char **tok = NULL;
	char *line_copy;
	char *token;

	line_copy = malloc(sizeof(char) * strlen(line));
	if (line_copy == NULL)
	{
		stderr;
	}
	strcpy(line_copy, line);
	tok = malloc(sizeof(char *) * line_copy); /* ver line copy si es necesario y como resolver este error*/
	{
		stderr;
	}

	token = strtok(line_copy, " ");
	while (token != NULL)
	{
		token = strtok(NULL, " ");
	}
	return (tok);
}
