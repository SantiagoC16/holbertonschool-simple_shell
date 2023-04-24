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

char *_getenv(const char *fath) 
{
    int i;
    char *envi;

    for (i = 0; environ[i] != NULL; i++)
    {
        if (strstr(environ[i], fath))
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
	char *line = NULL;
	size_t lenght = 0;
	int getlines = 0;

	while (1)
	{
		printf("Type_Bitch: ");
		getlines = getline(&line, &lenght, stdin);
		if (getlines == -1)
		{
			return (-1);
		}
	}
	return (lenght);
}

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
	char *delim = " \n\t";
	
	line_copy = malloc(sizeof(char) * strlen(line));
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
	tok = malloc(sizeof(char *) * strlen(token));
	if (tok == NULL)
	{
		return (NULL);
	}
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