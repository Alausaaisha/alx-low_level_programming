#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: character to be checked
 * Return: 1 if true and 0 if falsse
 */
int _isupper(int c)
{
	if (c >= 65 && c < 91)
		return (1);
	else
		return (0);
}
