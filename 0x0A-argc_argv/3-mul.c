#include <stdio.h>
#include <stdlib.h>

/**
 * main - the function multiplies two numbers
 * @argc: the argument counter
 * @argv: the argument vector
 * Return: returns 0 for success and 1 for failure
 */
int main(int argc, char *argv[])
{
	int multi = 0;


	if (argc == 3)
	{
		multi = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", multi);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
