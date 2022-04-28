#include "main.h"
/**
 * *_memset - function  fills memory with a constant byte.
 * @s: space to be filled
 * @n: no of bytes to fill
 * @b: the constant byte
 * Return: memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
