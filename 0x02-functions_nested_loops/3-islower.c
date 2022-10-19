#include "main.h"

/**
* _islower - A program that checks for lower case
* characters.
* @c: the character to be checked
* Return: 0
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
