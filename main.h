#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <stddef.h>
#include <sys/stat.h>

int main(void);
char **str_tok(char *line);
char *get_line(void);


#endif
