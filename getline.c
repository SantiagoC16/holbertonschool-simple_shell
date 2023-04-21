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
        char *line_copy = malloc(sizeof(char) * strlen(line));
        strcpy(line_copy, line);

        line_copy = strtok(line, " ");

        while (tok[i] != NULL)
        {
            i++;
            tok = strtok(NULL, " ");
        }
        return (tok);
}

execve;