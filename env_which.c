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

    for (i = 0; environ[i] != NULL; i++)
    {
        if (strstr(environ[i], fath))
        {
            envitwo = environ[i];
            envitwo = strfrmncpy(envitwo, envitwo, 5);
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

char *_which(const char **argv)
{
    char *fath = NULL, *fath_copy = NULL, *path = NULL;
    struct stat del_hijo;

    fath = _getenv("PATH");
    fath_copy = strtok(fath, ":");
    while (fath_copy)
    {
        path = malloc(sizeof(char) * strlen(fath_copy) + strlen(argv[0]) + 2);
        strcpy(path, fath_copy);
        strcat(path, "/");
        strcat(path, argv[0]);
        if (stat(path, &del_hijo) == 0)
        {
            free(fath);
            free(fath_copy);
            return (path);
        }
        free(path);
        fath_copy = strtok(NULL, ":");
    }
    free(fath);
    return (NULL);
}