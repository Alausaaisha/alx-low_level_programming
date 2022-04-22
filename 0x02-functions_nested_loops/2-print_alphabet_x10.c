#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * followed by a new line
 * Return: void
 */
void print_alphabet_x10(void)
{
	char d;
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		for (d = 'a'; d <= 'z'; d++)
			_putchar(d);
		_putchar('\n');
	}
}
