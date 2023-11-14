#include "main.h"

/**
 * specifier_handler - handles specific conversion specifiers.
 *
 * @specifier: the conversion specifier to handle.
 * @args: arguments list.
 */
void specifier_handler(char specifier, va_list args)
{
	switch (specifier)
	{
		case 'c':
			{
				/** Character argument retrieved as an int **/
				int c = va_arg(args, int);

				_putchar(c);
				break;
			}
		case 's':
			{
				char *str = va_arg(args, char *);

				print_string(str);
				break;
			}
		case '%':
			{
				_putchar('%');
				break;
			}
		default:
			_putchar('%');
			_putchar(specifier);
			break;
	}
}
