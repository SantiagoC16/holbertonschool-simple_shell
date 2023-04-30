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
            return (envitwo);
        }
    }
    return (NULL);
}

/**
 * _which - get the path
 * @name: var to get path
 * Return: 0
 */

char *_which(char *p, char **argv)
{
    char *path = NULL, *token_path = NULL, *cmd_path = NULL;
    struct stat *st;

    st = malloc(sizeof(struct stat));
    path = strdup(p);
    if (path == NULL)
    {
        perror("strdup failed");
        return (NULL);
    }
    token_path = strtok(path, ":");
    if (stat(argv[0], st) == 0)
    {
        free(path);
        free(st);
        return (argv[0]);
    }
    while (token_path != NULL)
    {
        cmd_path = malloc(sizeof(char) * strlen(token_path) + strlen(argv[0]) + 2);
        if (cmd_path == NULL)
        {
            perror("malloc failed");
            free(path);
            return (NULL);
        }
        strcpy(cmd_path, token_path);
        strcat(cmd_path, "/");
        strcat(cmd_path, argv[0]);
        if (stat(cmd_path, st) == 0)
        {
            free(path);
            free(st);
            return (cmd_path);
        }
        cmd_path = NULL;
        token_path = strtok(NULL, ":");
    }
    free(path);
    free(cmd_path);
    free(token_path);
    free(st);
    return (NULL);
}