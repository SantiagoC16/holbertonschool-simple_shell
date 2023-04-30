#include "shell.h"

/**
 * main - tests
 *
 * Return: idk yet
 */

int main(void)
{
    int getline_result = 0;
    size_t length = 0;
    char *str = NULL, **arr_cmd = NULL, *fpath = NULL, *path = NULL;

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
        path = _getenv("PATH");
        fpath = _which(path, arr_cmd);
        if (fpath != NULL)
        {
            exec_ve(str, arr_cmd);
        }
        else
        {
            perror("command not found"); 
        }
        
        free(arr_cmd);
        free(fpath);
        free(str);
    }
    return (0);
}

