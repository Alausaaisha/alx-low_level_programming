#include "main.h"
/**
 * *_memcpy -  function copies n bytes from memory area src to memory area dest
 * @src: source
 * @dest: where the memory is copied to
 * @n: no of bytes to copy
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
