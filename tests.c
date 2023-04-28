#include "shell.h"

/**
 * str_tok - tokenize
 * @line: is the input of the user
 * Return: the array of tokens
 */

char **tokenizer(char *line)
{
	char **tok = NULL;
	char *line_copy, *token, *delim = " \t";
	int ntokens = 0, cont1 = 0, cont2 = 0;
	
	line_copy = _strdup(line); 
	if (line_copy == NULL)
		return (NULL);
	token = strtok(line_copy, delim);
	while (token != NULL)
	{
		ntokens++;
		token = strtok(NULL, delim); 
	}
	tok = malloc(sizeof(char *) * (ntokens + 1));
	if (tok == NULL)
	{
		free(line_copy);
		return (NULL); 
	}
	token = strtok(line_copy, delim);
	for (cont1 = 0; cont1 < ntokens; cont1++)
	{
		tok[cont1] = _strdup(token);
        if (tok[cont1] == NULL)
		{
			for (cont2 = 0; cont2 < cont1; cont2++)
			{
				free(tok[cont2]); 
			}
			free(tok);
        	free(line_copy);
        	return NULL; 
		}
		token = strtok(NULL, delim); 
	}
	tok[ntokens] = NULL;
    free(line_copy);
	return (tok); 
}

/**
 * main - main
 * Return: no
 */

int main(void)
{
	char **tokens;
	char input[] = "I hate You Shell!";
	
	tokens = tokenizer(input);

	printf("%s\n", tokens[0]);
	printf("%s\n", tokens[1]); 
    printf("%s\n", tokens[2]); 
    printf("%s\n", tokens[3]); 
	return (0);
}