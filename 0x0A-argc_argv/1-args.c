#include <stdio.h>

/**
 * main - this prints the number of arguments passed
 * @argc: argument counter
 * @argv: argument vector
 * Return: Returns 0.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
