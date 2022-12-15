#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - it prints the result of the of positive nuumbers
 * @argc: the first parameter argument counter
 * @argv: the arguments vector
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	int result = 0, i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("%s\n", "Error");
				return (1);
			}

		}
	result = result + atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
