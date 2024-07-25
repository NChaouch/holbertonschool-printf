#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
/**
 * struct spe_printf - the struct to map
 * specifiers to corresponding functions.
 *
 * @spe: The format specifier character.
 *
 * @func: Pointer to the function that handles
 * the specifier.
 */
typedef struct spe_printf
{
	char spe;
	int (*func)(va_list);

} spe_printf_t;

int _putchar(char c);
int _printf(const char *format, ...);
int add_printf(const char *ptr, va_list args);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);

#endif
