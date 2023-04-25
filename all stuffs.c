#include "main.h"

/**
 * _strncpy - copy char's 
 * @dest: to use on getenv
 * @src: to use on getenv 
 * @n:int
 * Return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
    int i, j = 0;
    
    for (i = n; src[i] != '\0'; i++)
    {
        dest[j] = src[i];
        j++;
    }
    dest[j] = '\0';
    return (dest);
}

/**
 * _getenv - get the path 
 * @fath: var to get path
 * Return: 0
 */

char *_getenv(const char *phat) 
{
    int i = 0;
    char *envi = NULL;

    for (i = 0; environ[i] != NULL; i++)
    {
        if (strstr(environ[i], phat))
        {
            envi = environ[i];
            envi = _strncpy(envi, envi, 5);
            return (envi);
        }
    }
    return (NULL);
}

/**
 * get_line - pop up a prompt for the user to write
 *
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
	char *line_copy, *token, *delim = " \n\t";
	int ntokens = 0, i = 0, l = 0;
	
	line_copy = strdup(line); 
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
		tok[i] = strdup(token);
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

/**
 * 
 * 
 * 
 */

int main(void)
{
	int len = get_line(&line);
	char arr = str_tok(&line);
	char *_getenv(const char *fath);
	

	return (0);
}