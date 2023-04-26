#include "shell.h"

/**
 * _strdup - Write a function that returns a pointer to a newly allocated
 * space in memory which contains a copy of the string given as a parameter
 *
 * @str: is a pointer
 *
 * Return: 0
 */

char *_strdup(char *str)
{
    char *p;
    int cont;
    int copy;

    if (str == NULL)
    {
	    return (NULL);
    }

    else
    {
	    for (cont = 0; str[cont]; cont++)
	    {
        }
        p = malloc(sizeof(char) * cont + 1);
	    if (p == NULL)
	    {
	    	return (NULL);
	    }
	    for (copy = 0; copy <= cont; copy++)
	    {
	        p[copy] = str[copy];
	    }
    return (p);
    }
}

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