#include "shell.h"

/**
 * get_line - pop up a prompt for the user to write
 * @line: pointer to pointer
 * Return: the line the user write
 */

int *get_line(char **line)
{
	char *str = NULL;
	size_t lenght = 0;
	int getline_result = 0;

	while (1)
	{
		printf("Type_Bitch: ");
		getline_result = getline(&str, &lenght, stdin);
		if (getline_result == -1)
		{
			free (str);
			return (-1);
		}
		else
		{
			*line = str;
			return &getline_result;
		}
	}
	return (&getline_result);
}

/**
 * str_tok - tokenize
 * @line: is the input of the user
 * Return: the array of tokens
 */

char **str_tok(char *line)
{
	char **tok = NULL;
	char *line_copy, *token, *delim = " \t";
	int ntokens = 0, i = 0, l = 0;
	
	line_copy = _strdup(line); 
	if (line_copy == NULL)
	{
		return (NULL);
	}
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
	for (i = 0; i < ntokens; i++)
	{
		tok[i] = _strdup(token);
        if (tok[i] == NULL)
		{
			for (l = 0; l < i; l++)
			{
				free(tok[l]);
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