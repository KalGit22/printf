#include "main.h"

/**
 * _printf - Prpduce output according to our format
 *
 * @format:
 * @param ...:
 * @return int
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putc(format[i]);
		}
		else if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
		}
		i++;
	}
	va_end(args);
	return (0);
}
