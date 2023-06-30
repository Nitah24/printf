#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _printf - a manual printf
 * @format: pointer to a format
 * Return: 0 success
 */

int _printf(const char *format, ...)
{
	unsigned int i;
	char *s;

	va_list arg;

	va_start(arg, format);

	while (*format != '\0')
	{
		while (*format != '%')
		{
			_putchar (*format);
			format++;
		}
		format++;

		switch (*format)
		{
		case 'c': i = va_arg(arg, int);
			_putchar(i);
			break;

		case 's': s = va_arg(arg, char *);
			puts(s);
			break;
		}
	}
	va_end(arg);
	format++;

	return (0);
}
