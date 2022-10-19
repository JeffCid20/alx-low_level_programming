#include "main.h"

/**
* print_sign - A program that prints +, 0 and -
*
* @n: the parameter used
*
* Return: 0, 1 and -1 depending on the outcome
*/
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else
	{
	_putchar('-');
	return (-1);
	}
}
