#include "main.h"

/**
* _isalpha - A program that prints whether an alphabet
* is lower, uppercase or otherwise
*
* @c: the alphabet to be used
*
* Return: 1 if it is upper or lowercase else 0
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	(c >= 'A' && c <= 'Z'))
	return (1);

	else
	return (0);
}
