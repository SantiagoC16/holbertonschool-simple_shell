#include "main.h"

/**
 * get_line - pop up a prompt for the user to write
 *
 * Return: the line the user write
 */

char *get_line(void)
{
	char *line = NULL;
	size_t lenght;
	int getlines = 0;

	while (1)
	{
		printf("Type_B: ");
		getlines = getline(&line, &lenght, stdin);
		if (getlines == -1)
		{
			break; /*cambiar funcion return char xq return tiene q ser -1*/
		}
		printf("%s", line); /*casi seguro no es necesario*/
	}
	return (line);
}
/* checkear lo de eof/ ctrl+d */ /*no me acuerdo cuando puse esto xD*/