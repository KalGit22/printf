#include "main.h"

/**
 * _printb - Convert of decimals in binary
 * @args: Store the argumen values
 * Return: The count
 */
int _printb(va_list args)
{
	unsigned int i, count, n, bin, arr[32];

	i = 0, count = 0;
	n = va_arg(args, int);

	if (n < 1)
	{
		count += _putc(48);
		return (count);
	}
	else
	{
		while (n > 0)
		{
			bin = n % 2;
			n /= 2;
			arr[count] = bin;
			count++;
		}
		i = count - 1;
		while (i > 0)
		{
			_putc('0' + arr[i]);
			i--;
		}
		_putc('0' + arr[i]);
	}
	return (count);
}

/**
 * _select - selects function for conversion specifier
 *
 * @c: conversion specifier
 * Return: count of characters printed
 */
int (*_select(char c))(va_list)
{
	if (c == 'c')
	{
		return (_printc);
	}
	else if (c == 's')
	{
		return (_prints);
	}
	else if (c == 'i' || c == 'd')
	{
		return (_printi);
	}
	else if (c == 'b')
	{
		return (_printb);
	}

	return (NULL);
}
