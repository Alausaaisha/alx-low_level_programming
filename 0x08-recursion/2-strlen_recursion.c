#include "main.h"
/**
 * _strlen_recursion - returns the length of a string but does it recursively
 * @s: string
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (s[n] == '\0')
		return (n);
	return (_strlen_recursion(s + 1));
}
