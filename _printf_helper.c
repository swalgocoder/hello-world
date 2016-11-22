#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"

/**
 * _putchar - writes character to stdout
 * @c: character to print
 *
 * Return: write
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _strcat - concatenate two strings
 * @dest: base string
 * @src: string to be added
 *
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int i, n;

	i = 0;
	while (dest[i] != '\0')
		i++;
	for (n = 0; src[n] != '\0'; n++)
	{
		dest[i] = src[n];
		i++;
	}
	dest[i] = src[n];
	return (dest);
}

/**
 * my_printchar - print a char
 * @ptr_args: char to print
 * @b: pointer to buffer
 *
 * Return: 1
 */
char *my_printchar(char *base, va_list ptr_args)
{
	char *swap;
	int i;

	swap = malloc(100);
	i = va_arg(ptr_args, int);
	itoa(i, swap);
	_strcat(base, swap);
	free(swap);
	return (base);
}

/**
 * my_printstr - print a string
 * @b: pointer to buffer
 * @ptr_args: string to print
 *
 * Return: length of str
 */
char *_printstr(char *base, va_list ptr_args)
{
	char *str;

	str = malloc(100);
	*str = va_arg(ptr_args, int);
	_strcat(base, str);
	free(str);
	return (base);
}

/**
 * my_printstring - print string using _putchar
 * @string: string to print
 *
 * Return: 1 or - 1
 */
int my_printstring(char *string)
{
	int i;

	i = 0;
	while (string[i])
	{
		_putchar(string[i]);
		i++;
	}
	_putchar('\0');
	return (1);
}
