#include "main.h"

/**
 * print_alphabet_x10 - make alphabet x10 times
 * Return: void
 */

void print_alphabet_x10(void)
{
	char ch = 'a';
	int i;

	for (i = 1; i < 11; i++)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
	}
}
