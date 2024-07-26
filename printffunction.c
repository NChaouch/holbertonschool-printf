#include "main.h"
#include <stdarg.h>

/**
 * print_char - funtion that is going to print
 * the character.
 *
 * @args: This is the argument list who is
 * containing a character to print.
 *
 * Return: Returns the character.
 *
*/

int print_char(va_list args)
{
	char c = va_arg(args, int);
	{
		_putchar(c);
		return (1);
	}
}

/**
 * print_string - Function that print a string.
 *
 * @args: Argumentation list.
 *
 * Return: Returns ct.
*/

int print_string(va_list args)
{
	char *s = va_arg(args, char *);
	int ct = 0;

	while (*s)
	{
		_putchar(*s++);
		ct++;
	}
	return (ct);
}

/**
 * print_percent - Function that print percent
 *
 * @args: Argumentation list.
 *
 * Return: Returns character % | 1.
 *
*/

int print_percent(va_list args)
{
	(void)args;
	{
		_putchar('%');
	}
	return (1);
}

/**
 * print_integer - Function to print an integer.
 *
 * @args: Argument list.
 *
 * Return: Returns the number of characters printed.
 */
int print_integer(va_list args)
{
	int n = va_arg(args, int);
	{
		return (printint_help(n, 10));
	}
}

/**
 * printint_help - Helper function to print a number.
 *
 * @n: The number to print.
 * @base: The base to print the number in.
 *
 * Return: Returns the number of characters printed.
 */
int printint_help(long int n, int base)
{
	int ct = 0;

	if (n < 0)
	{
		_putchar('-');
		ct++;
		n = -n;
	}

	if (n >= base)
	{
		ct += printint_help(n / base, base);
	}

	ct += _putchar((n % base) + '0');
	{
		return (ct);
	}
}
