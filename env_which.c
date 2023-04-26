#include "shell.h"

/**
 * _getenv - get the path 
 * @fath: var to get path
 * Return: 0
 */

char *_getenv(const char *phat) 
{
    int i = 0;
    char *envitwo = NULL;

    for (i = 0; environ[i] != NULL; i++)
    {
        if (strstr(environ[i], phat))
        {
            envitwo = environ[i];
            envitwo = _strncpy(envitwo, envitwo, 5);
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

char *_which(const char *cmd)
{
    char *fath = NULL, *dir = NULL, path = NULL;
    struct stat del_hijo;

    fath = _getenv("PATH");
    dir = strtok(fath, ":");
    while (dir)
    {
        path = malloc(sizeof(char) + strlen(dir) + strlen(cmd) + 2);
        strcpy(path, dir);
        strcpy(path, "/");
        strcpy(path, cmd);
        if (stat(path, &del_hijo) = 0)
        {
            free(fath);
        }
    }
}