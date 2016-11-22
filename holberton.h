#ifndef HOLBERTON
#define HOLBERTON
#include <stdarg.h>
/**
 * struct switchormat - structure
 * @s: format
 * @f: function
 */
typedef struct print_format_t
{
	char *s;
	char * (*f)();
}print_format;

int _abs(int i);
void *_calloc(unsigned int nmemb, unsigned int size);
int _putchar(char c);
int _printf(const char *format, ...);
char *my_printnum(char *base, va_list ptr_args);
char *my_printchar(char *base, va_list ptr_args);
char *my_printstr(char *base, va_list ptr_args);
char *_strcat(char *dest, char *src);
int itoa(int num, char s[]);
int my_printstring(char *string);

#endif /* ifndef HOLBERTON */
