#include "main.h"

/**
 * _putstr - prints the value of the string pointer parameter
 * @str: the String parameter
 *
 * Return: the size of the printed string
 */
int _putstr(char *str)
{
	int i;
	int len = _strlen(str);

	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}
	return (len);

}
