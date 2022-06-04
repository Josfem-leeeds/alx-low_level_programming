#include <stdio.h>
/**
 * main - the code starts here
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char let;

	for (let = 'a'; let <= 'z'; let++)
	{
		if (let != 'q' && let != 'e')
		putchar(let);
	}
	putchar('\n');
	return (0);
}
