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
	/*definir delim aca despues!*/

	line_copy = malloc(sizeof(char) * strlen(line));
	if (line_copy == NULL)
	{
		stderr;
	}
	strcpy(line_copy, line); /*podriamos usar strdup, si usamos tener cuidado porq aloca memoria y si falla tenemos q liberar pero creo q deberiamos*/

	token = strtok(line_copy, " \n\t");
	while (token != NULL)
	{
		token = strtok(NULL, " ");
	}
	tok = malloc(sizeof(char *) * token); /*ver video de nuevo porq nose si nuestra implementacion esta mal o solo es distinta*/
	/*para checkear probar crear un int y hacer q imprima cuanto tioken separa strtok*/
	return (tok);
}
