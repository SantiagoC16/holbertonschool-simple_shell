#include "main.h"

int main(void)
{
    char *line;
    size_t lenght;
    int lines = 0;
    char **token;

    while (1)
    {
        printf("$ ");
        lines = getline(&line, &lenght, stdin);
        token = strtok(line, " ");

        if (lines == -1)
        {
            break;
        }
        printf("%s", line);
    }

    return (lines);
}