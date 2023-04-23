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
	int i = 0, counter = 0;
	int index = _strlen(format);

	va_start(argz, format);
	while ((format[i]) && (i < index))
	{
	if (format[i] == '%')
	{
	i++;
	switch (format[i])
	{
	case 'c':
	counter = counter + _putchar(va_arg(argz, int));
	break;
	case 's':
	counter = counter + _putstr(va_arg(argz, char *));
	break;
	case 'i':
	counter = counter + print_number(va_arg(argz, int));
	break;
	case 'd':
	counter = counter + print_number(va_arg(argz, int));
	break;
	case '%':
	counter = counter + _putchar(format[i]);
	break;
	default:
	counter = counter + _putchar(format[i - 1]);
	counter = counter + _putchar(format[i]);
	break;
	}
	i++;
	}
	if (i < index)
	{
	counter = counter + _putchar(format[i]);
	i++;
	}
	else
	break;
	}
	va_end(argz);
	return (counter);
}
