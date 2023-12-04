#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
int str_len(char *s);
int _printf(const char *format, ...);
int print_format(char format, va_list args);
#endif
