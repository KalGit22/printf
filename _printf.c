#include "main.h"

/**
 * _printf - Produces output according to a format.
 * @format: The format to be printed
 * @...: The arguments to be used by the funtion
 * Return: count of charactes printed
 */
int _printf(const char *format, ...)
{
	int count = -1;

	if (format != NULL)
	{
		int i = 0;

		va_list args;
		int  (*func)(va_list);

		va_start(args, format);
		if (format[0] == '%' && format[1] == '\0')
			return (count);
		count = 0;
		if (format[i] != '%')
		{
			count += _putc(format[i]);
		}
		else
		{
			if (format[i + 1] == '%')
			{
				count += _putc('%');
				i++;
			}
			else
			{
				func = _select(format[i + 1]);
				count += (func ? func(args) : _putc(format[i]) + _putc(format[i + 1]));
				i++;
			}
		}
		va_end(args);
	}
	return (count);
}
