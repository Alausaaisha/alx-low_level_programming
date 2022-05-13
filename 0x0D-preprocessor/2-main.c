#include <stdio.h>
/**
 * main - writes a program that prints the name of the file it was compiled
 * from followed by a new line
 * Return: 0
 */
int main(void)
{
	printf("File: %s\n", _FILE_);
	return (0);
}
