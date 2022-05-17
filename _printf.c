#include "main.h"

/**
 * _printf - Produces output according to a format.
 *
 * @format: The format to be printed
 * @...: The arguments to be used by the funtion
 * Return: 0
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
			{
				_putc(va_arg(args, int));
				i++;
			}
			else if (format[i + 1] == 's')
			{
				_prints(va_arg(args, char *));
				i++;
			}
			else if (format[i + 1] == '%')
			{
				_putc('%');
				i++;
			}
			else if (format[i + 1] == 'd' || format[i + 1] == 'i')
			{
				_printi(va_arg(args, int));
				i++;
			}
		}
		i++;
	}
	va_end(args);
	return (i);
}
