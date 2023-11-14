#include "main.h"

/**
 * print_char - Prints a single character and increments the count
 *
 * @c: Character to be printed
 * @count: Pointer to the count variable
 *
 */
void print_char(int c, int *count)
{
	_putchar(c);
	(*count)++;
}
