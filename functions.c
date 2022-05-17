#include "main.h"

/**
 * _putc - prints a character
 *
 * @c: character to print
 * Return: 1 if success, -1 if unsuccessful
 */
int _putc(char c)
{
	return (write(1, &c, 1));
}

/**
 * _prints - prints a string
 *
 * @s: string to be printed
 * Return: 0
 */
int _prints(char *s)
{
	int j = 0;

	while (s[j] != '\0')
	{
		_putc(s[j]);
		j++;
	}
	return (0);
}
