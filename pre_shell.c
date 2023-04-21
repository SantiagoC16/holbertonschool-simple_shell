#include <stdio.h>
/**
 * main - is the main
 * @argc: argument counter 
 * @argv: argument vector
 * 
 * Return: 0
 */
int acav(int argc, char **argv)
{
	int i = 0;

	
	for (int i = 0; i < argc; i++) 
	{
        printf("%s\n", argv[i]);
	}
	return (0);
}

