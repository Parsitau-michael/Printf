#include "main.h"

/**
 * print_string - prints a string character by character
 *
 * @str: pointer to the string to be printed.
 * @count: Pointer to the count variable
 *
 */
void print_string(const char *str, int *count)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		(*count)++;
	}
}
