#include <stdio.h>
/**
 * main - this is the main function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char let;
	int n;

	for (n = 48; n <= 57; n++)
		putchar(n);
	for (let = 'a'; let <= 'f'; let++)
		putchar(let);
	putchar('\n');
	return (0);
}
