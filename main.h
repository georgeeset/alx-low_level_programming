#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcnt1.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);

#endif
