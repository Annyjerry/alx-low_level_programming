#include <stdlib.h>
#include <stdio.h>
/**
* main - A program to prints alphabets in reverse
* Return: Always 0 (Success)
*/
int main(void)
{
	int ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
