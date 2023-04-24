#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <stddef.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>


int main(void);
char **str_tok(char *line);
int *get_line(char **line);
extern char **environ;
char *_strncpy(char *dest, char *src, int n);
char *_getenv(const char *fath);


#endif
