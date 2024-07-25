#include "main.h"
/**
 * _printf - This function produces an output
 * according to a format.
 *
 * @format: String's format that contain
 * characters and specifiers.
 *
 * Return: the number of the characters printed.
 * and excluding the null byte.
*/

int _printf(const char *format, ...)
{
	va_list args;
	const char *ptr;
	int ct = 0;

	va_start(args, format);
	ptr = format;

	while (*ptr != '\0')
	{
		if (*ptr == '%')
		{
			ptr++;
			ct += add_printf(ptr, args);
			ptr++;
		}
		_putchar(*ptr);
		ptr++;
		ct++;
	}
	va_end(args);
	return (ct);
}

/**
 * add_printf - function that checks if
 * modulo character is present.
 *
 * @ptr: pointer to the constent character.
 *
 * @args: list of the arguments used.
 *
 * Return: returns the number of characters printed.
 */

int add_printf(const char *ptr, va_list args)
{
	int t;
	int ct = 0;

	spe_printf_t name_tab[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'\0', NULL}
	};

	for (t = 0; name_tab[t].spe != '\0'; t++)
	{
		if (*ptr == name_tab[t].spe)
		{
			ct += name_tab[t].func(args);
			break;
		}
	}
	if (name_tab[t].spe == '\0' && *ptr != '\0')
	{
		_putchar('%');
		_putchar(*ptr);
		ct += 2;
	}

	return (ct);
}
