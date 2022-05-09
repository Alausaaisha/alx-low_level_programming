#include <stdio.h>
/**
 * main - program that prints all arguments it receives
 * @argc: no of arguments
 * @argv: array of command line arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;

	for(i = 0; i <argc; i++)
	{
		printf("%s", argv[i]);
	}
	return (0);
}