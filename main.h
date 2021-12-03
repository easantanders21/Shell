#ifndef MAIN_H
#define MAIN_H
/*include library*/
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <sys/wait.h>
#define UNUSED(x) (void)(x)
void _strdup(char *str, char**str_copy);
#endif /* MAIN_H */
