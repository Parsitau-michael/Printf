#include "main.h"

/**
 * print_digit - a function that prints integers and decimal values.
 *
 * @dig: the number to be printed.
 * @count: Pointer to the count variable.
 * Return: 0 Always.
 */
int print_digit(long int dig, int *count)
{
	if (dig < 0)
	{
		_putchar('-');
		(*count)++;
		dig = dig * -1;
	}
	if (dig / 10 != 0)
	{
		print_digit(dig / 10, count);
	}
	_putchar(dig % 10 + '0');
	(*count)++;
	return (0);
}
