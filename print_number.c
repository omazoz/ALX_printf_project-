#include "main.h"

/**
 * print_int - prints an integer
 * @list: va_list of arguments from _printf
 * @f: pointer to the struct flags determining
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int print_int(va_list list, flags_t *f)
{
	int n = va_arg(list, int);
	int res = counter_of_digit(n);

	if (f->space == 1 && f->plus == 0 && n >= 0)
		res += _putchar(' ');
	if (f->plus == 1 && n >= 0)
		res += _putchar('+');
	if (n <= 0)
		res++;
	print_num(n);
	return (res);
}

/**
 * print_unsigned - prints an unsigned integer
 * @list: va_list of arguments from _printf
 * @f: pointer to the struct flags determining
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int print_unsigned(va_list list, flags_t *f)
{
	unsigned int u = va_arg(list, unsigned int);
	char *str = convert(u, 10, 0);

	(void)f;
	return (_puts(str));
}

/**
 * print_num - helper function that loops through
 * an integer and prints all its digits
 * @num: integer to be printed
 */
void print_num(int num)
{
	unsigned int n1;

	if (num < 0)
	{
		_putchar('-');
		n1 = -num;
	}
	else
		n1 = num;

	if (n1 / 10)
	print_num(n1 / 10);
	_putchar((n1 % 10) + '0');
}

/**
 * counter_of_digit - returns the number of digits in an integer
 * for _printf
 * @num: integer to evaluate
 * Return: number of digits
 */
int counter_of_digit(int num)
{
	unsigned int l = 0;
	unsigned int d;

	if (num < 0)
		d = num * -1;
	else
		d = num;
	while (d != 0)
	{
		d /= 10;
		l++;
	}
	return (l);
}
