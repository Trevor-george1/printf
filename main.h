#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list arg);
int print_string(va_list arg);
int print_int(va_list arg);
int print_binary(unsigned int num);
int print_unsigned_(va_list arg);
int print_oct(va_list arg);
int print_hex(va_list arg, int uppercase);
int print_unsigned_hex(va_list arg);
int print_unsigned_hex_upper(va_list arg);
int print_string_S(va_list args);
int print_p(va_list args);
int selector(const char *format, va_list args);
#endif
