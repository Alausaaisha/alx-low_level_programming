#include "main.h"
#include <string.h>
/**
 * int _strlen -  returns the length of a string
 * @*s: string who length is to be printed
 * Return: void
 */
int _strlen(char *s)
{
	char s;
	int len;

	s = "My first strlen!";
	len = _strlen(s);
	{
	_putchar("strlen(s) :  %d\n", len);
	}
}
