#include "main.h"

/**
 * str_tok - tokenize
 * @line: is the input of the user
 * Return: the array of tokens
 */

char **str_tok(char *totoken)
{
	char **tok = NULL;
	char *line_copy;
	char *token;
	char *delim = " \n\t";
	
	line_copy = malloc(sizeof(char) * strlen(totoken));
	if (line_copy == NULL)
	{
		stderr;
		free(line_copy);
	}
	line_copy = strdup(line); 

	token = strtok(line_copy, delim);
	while (token != NULL)
	{
		token = strtok(NULL, delim);
	}
	tok = malloc(sizeof(char *) * strlen(token)); /*ver video de nuevo porq nose si nuestra implementacion esta mal o solo es distinta*/
	/*para checkear probar crear un int y hacer q imprima cuanto tioken separa strtok*/
	return (tok);
}
