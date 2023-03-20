#include <stdio.h>
#include <stdlib.h>
/**
* main - returns alphabets
* Return: Always 0 (Success)
*/
int main(void)
{
	int alp = 'a';

	while (alp <= 'z')
	{
		putchar(alp);
		alp = alp + 1;
	}
	putchar('\n');
	return (0);
}
