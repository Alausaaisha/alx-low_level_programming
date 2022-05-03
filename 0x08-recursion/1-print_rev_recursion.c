#include "main.h"
/**
 * _print_rev_recursion
 * @s: string
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s+1);
		_putchar(*s);
	}
}
