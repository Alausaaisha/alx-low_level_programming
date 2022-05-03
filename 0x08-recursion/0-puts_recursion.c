#include "main.h"
/**
 * _puts_recursion - function that prints a string
 * s: string to be printed
 * Return: void
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar ('\n');
		return ;
	}
	else if (s[i] != '\0')
	{
		_putchar (s[i]);
		_puts_recursion(s + 1);
	}
}
