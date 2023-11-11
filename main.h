#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
int _printf(const char *format, ...);
int print_char(va_list arg, int printed);
int print_string(va_list arg, int printed);
int selector(const char *format, va_list args, int printed);
#endif
