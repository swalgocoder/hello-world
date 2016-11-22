#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _printf - replicate the printf function
 * @format: character string
 *
 * Return: number of characters printed (not including '\0')
 */
int _printf(const char *format, ...)
{
	va_list ptr_args;
	char *buffer;
	int i, n;
	print_format copy_format[] = {
		{"i", my_printnum},
		{"c", my_printchar},
		{"s", my_printstr},
		{"d", my_printnum},
	};

	va_start(ptr_args, format);
	/* looping format*/
	for (i = 0; format[i] != '\0'; i++)
	{
		n = 0;
		while (format[i] != '%')
		{
			buffer[n] = format[i];
			if (format[i] == '%')
			{
				i++;
				buffer = copy_format[n].f(buffer, ptr_args);
			}
			n++;
		}
	}
	my_printstring(buffer);
	va_end(ptr_args);
	return (i);
}
