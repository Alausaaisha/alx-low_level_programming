#include <stdio.h>
#include <stdlib.h>
/**main - print the name of file
 * @argc: no of command line argument
 * @argv: An array containing the program coomand line arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
