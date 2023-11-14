#include "main.h"

/**
 * print_string - prints a string character by character
 *
 * @str: pointer to the string to be printed.
 */
void print_string(const char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}
