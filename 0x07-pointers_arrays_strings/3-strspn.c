#include "main.h"
/**
 * _strspn - Returns the number of bytes in the initial segment of s which
 * consist only of bytes from accept
 * @s: full string
 * @accept: substring to return
 * Return: length of substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	char *t = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				c++;
				break;
			}
		if (!(*--accept))
			break;
		accept = t;
	}
	return (c);
}
