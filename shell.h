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
char **tokenizer(char *line);
extern char **environ;
char *_getenv(const char *fath);
char *_which(char *p, char **argv);
int exec_ve(char **argv);
char *_strcat(char *dest, char *src);

#endif
