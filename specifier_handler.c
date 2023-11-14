#include "main.h"

/**
 * specifier_handler - handles specific conversion specifiers.
 *
 * @specifier: the conversion specifier to handle.
 * @args: arguments list.
 * @count: Pointer to the count variable.
 */
void specifier_handler(char specifier, va_list args, int *count)
{
	switch (specifier)
	{
		case 'c':
			{
				/** Character argument retrieved as an int **/
				int c = va_arg(args, int);

				print_char(c, count);
				break;
			}
		case 's':
			{
				char *str = va_arg(args, char *);

				print_string(str, count);
				break;
			}
		case '%':
			{
				_putchar('%');
				(*count)++;
				break;
			}
		case 'd':
		case 'i':
			{
				int num = va_arg(args, int);

				print_digit(num, count);
				break;
			}
		default:
			_putchar('%');
			_putchar(specifier);
			*count += 2;
			break;
	}
}
