#include <stdio.h>

/**
 * _strlen - returns length of a string
 * @str: string to get length of
 *
 * Return: length of string
 */
int _strlen(const char *str)
{
	int i = 0;

	while (*str++)
		i++;
	return (i);
}