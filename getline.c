#include "main.h"

int main(void)
{

}

char *get_line(void)
{
	char *line;
	size_t lenght;
	int getlines = 0;

	while (1)
	{
		printf("$ ");
		getlines = getline(&line, &lenght, stdin);
		if (getlines == -1)
		{
			break;
		}
		printf("%s", line);
	}
	return (line);
}

char **str_tok(char *line)
{
	char **tok = NULL;
	int i = 0;
	char *line_copy;
	int max_tokens;
	char *token;

	line_copy = malloc(sizeof(char) * strlen(line));
	if (line_copy == NULL)
	{
		return (-1);
	}
	strcpy(line_copy, line);
	tok = malloc(sizeof(char *) tok = malloc(sizeof(char *) * max_tokens);
	{
		return (-1);
	}

	line_copy = strtok(line, " ");

	while (tok[i] != NULL)
	{
		i++;
		tok = strtok(NULL, " ");
	}
	return (tok);
}

execv
