#include "shell.h"

/**
 * main - tests
 *
 * Return: idk yet
 */

/*int main(void)
{
    int getline_result = 0;
    size_t length = 0;
    char *str = NULL, **arr_cmd = NULL, *path = NULL;

    while (1)
    {
        printf("Type_Bitch: ");
        getline_result = getline(&str, &length, stdin);
        if (getline_result == -1)
		{
			free (str);
			exit(1);
		}
        arr_cmd = tokenizer(str);
        path = _which(arr_cmd[0]);
        if (path != NULL)
        {
            exec_ve(arr_cmd);
        }
        else
        {
            perror("command not found"); 
        }
        
        free(arr_cmd);
        free(path);
    }
    return (0);
} 
