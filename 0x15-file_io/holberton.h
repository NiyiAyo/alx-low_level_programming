#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdlib.h>
#include <sys/types.h>
#include <fcntl.h> 

#include <unistd.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);

#endif