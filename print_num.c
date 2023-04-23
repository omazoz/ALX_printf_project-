
#include "main.h"

/**
 * print_number - prints out the value of an integer
 * @value: number to be printed
 *
 * Return: the number of digits printed
 */
int print_number(int value)
{
    int i = 0;
    int num = 0;

    if (value < 0)
    {
        value = value * -1;
        num = num + _putchar('-');
    }
    if (value > 9)
    {
        num = num + print_number(value / 10);
        i = value % 10;
        num = num + _putchar('0' + i);
    }
    else
    {
        num = num + _putchar('0' + value);
    }
    return (num);
}