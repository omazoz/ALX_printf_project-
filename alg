#include "main.h"

/* Handle format specifier */
void handle_specifier(char specifier, va_list args)
{
    switch (specifier)
    {
        case 'c':
            putchar(va_arg(args, int));
            break;
        case 's':
            fputs(va_arg(args, char *), stdout);
            break;
        case '%':
            putchar('%');
            break;
        default:
            putchar('%');
            putchar(specifier);
            break;
    }
}

int _printf(const char *format, ...)
{
    va_list args;
    int i = 0, count = 0;

    va_start(args, format);

    while (format[i])
    {
        /* Check if the current character is part of a format specifier */
        if (format[i] == '%' && format[i + 1])
        {
            /* Handle format specifier */
        }
        else
        {
            /* Print out non-format characters */
            putchar(format[i]);
            count++;
        }
        i++;
    }

    va_end(args);
    return count;
}