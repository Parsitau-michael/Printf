#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>

int _putchar(char c);
void print_char(int c, int *count);
int print_digit(long int dig, int *count);
void print_string(const char *str, int *count);
int _printf(const char *format, ...);
void specifier_handler(char specifier, va_list args, int *count);

#endif /** MAIN_H **/
