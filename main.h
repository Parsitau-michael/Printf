#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>

int _putchar(char c);
void print_string(const char *str);
int _printf(const char *format, ...);
void specifier_handler(char specifier, va_list args);

#endif /** MAIN_H **/
