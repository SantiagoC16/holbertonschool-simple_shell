#include "shell.h"

/**
 * _getenv - get the path 
 * @fath: var to get path
 * Return: 0
 */

char *_getenv(const char *fath) 
{
    int i = 0;
    char *envitwo = NULL;

    for (i = 0; environ[i]; i++)
    {
        if (strncmp(environ[i], fath, 4) == 0)
        {
            envitwo = environ[i];
            return(envitwo);
        }
    }
    return (NULL);
}

/**
 * _which - get the path 
 * @name: var to get path
 * Return: 0
 */

char *_which(char **argv)
{
    char *fath, *path, *token_path, *cmd_path;

    fath = _getenv("PATH");
    if (fath == NULL)
        return (NULL);

    path = strdup(fath);
    if (path == NULL)
        return (NULL);

    token_path = strtok(path, "=:");
    cmd_path = malloc(sizeof(char) * strlen(token_path) + strlen(argv[0]) + 2);
    if (cmd_path == NULL)
    {
        free(path);
        return (NULL);
    }
    while (token_path != NULL)
    {
        
        strcpy(cmd_path, token_path);
        strcat(cmd_path, "/");
        strcat(cmd_path, argv[0]);

        if (access(cmd_path, X_OK) == 0)
        {
            free(path);
            return (cmd_path);
        }
        cmd_path = NULL;
        token_path = strtok(NULL, ":");
    }
    free(path);
    free(cmd_path);
    free(token_path);
    return (NULL);
}