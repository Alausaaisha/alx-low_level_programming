#include "main.h"
/**
 * _puts_recursion -  a function that prints a string
 * s: string to be printed
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	_puts_recursion(*s);
}