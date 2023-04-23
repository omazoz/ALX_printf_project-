#include "main.h"
/**
 * _printf - prints a formatted data
 * @format: the identifier
 *
 * Return: the length of the printed string
 */
int _printf(const char *format, ...)
{
	va_list argz;
	int counter = 0;

	va_start(argz, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					counter += _putchar(va_arg(argz, int));
					break;
				case 's':
					counter += _putstr(va_arg(argz, char *));
					break;
				case 'i':
				case 'd':
					counter += print_number(va_arg(argz, int));
					break;
				case '%':
					counter += _putchar('%');
					break;
				default:
					counter += _putchar('%');
					counter += _putchar(*(format - 1));
					break;
			}
		}
		else
		{
			counter += _putchar(*format);
		}
		format++;
	}
	va_end(argz);
	return (counter);
}

