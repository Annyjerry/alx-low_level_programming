#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: function parameter
 * Return: 0
 */
void print_rev(char *s)
{
	int i = 0;
	int count;


	while (*s != '\0')
	{
		i++;
		s++;
	}
	s--;
	for (count = i; count > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
