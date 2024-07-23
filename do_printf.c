#include "main.h"

/**
 * _printf - This function produces an output according to a format.
 *
 * @format: String's format that contain characters and specifiers
 *
 * Return: Returns the number of the characters printed
 *
 * and excluding the null byte.
*/

int _printf(const char *format, ...)
{

spe_printf_t name_tab[] = {
	{'c', print_char},
	{'s', print_string},
	{'%', print_percent},
	{'\0', NULL}
	};

	va_list args;
	int ct = 0;
	const char *ptr;
	int t;

	va_start(args, format);
	for (ptr = format; *ptr; ptr++)
	{
		if (*ptr == '%')
		{
			ptr++;
			for (t = 0; name_tab[t].spe; t++)
			{
				if (*ptr == name_tab[t].spe)
				{
				name_tab[t].func(args);
				break;
				}
			}
			ct++;
		}
		else
		{
			_putchar(*ptr);
			ct++;
		}
	}
	va_end(args);
	return (ct);
}

/**
 * print_char - Function that is going to print the character.
 *
 * @args: This is the argument list who is containing a character to print.
*/

int print_char(va_list args)
{
	int c;
	c = va_arg(args, int);
	_putchar('c');
	return (1);
}
