#include "main.h"

/**
* print_alphabet_x10 - A program that prints
* all the alphabets in lowercase in a loop 10x
*/
void print_alphabet_x10(void)
{
	char i;
	char ch = 'a';

	while (i < 10)
	{
	for (ch = 'a'; ch <= 'z'; ch++)
	_putchar(ch);
	_putchar('\n');
	i++;
	}
}
