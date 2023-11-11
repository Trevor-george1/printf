#ifndef MAIN_H
#define MAIN_h
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
int _printf(const char *format, ...);
void print_char(va_list arg);
void print_string(va_list arg);
#endif
