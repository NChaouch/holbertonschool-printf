#include "main.h"

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
	int ct = 0, m;

	if (s == NULL)
	{
		s = "(null)";
		ct++;
		_putchar(*s);
	}
	else
	{
	for (m = 0; s[m] != '\0'; m++)
	{
		_putchar(s[m]);
		ct++;
	}
	}
	return (-1);
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
