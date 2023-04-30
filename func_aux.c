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
 * strfrmncpy - copies a string from n
 * @src: pointer to the string
 * @dest: destination
 * @n: an integer
 *
 * Return: returns copied string
 */

char *strfrmncpy(char *dest, char *src, int n)
{
	int comp = 0;
	int count = 0;

	for (comp = n; src[comp] != '\0'; comp++)
	{
		dest[count] = src[comp];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}

/**
 * _strcat - Write a function that concatenates two strings
 * @dest: is a pointer.
 * @src: is a pointer.
 * Return: always
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{
		;
	}
	for (b = 0; src[b] != '\0'; b++)
	{
		dest[a + b] = src[b];
	}
	dest[a + b] = '\0';
	return (dest);
}
