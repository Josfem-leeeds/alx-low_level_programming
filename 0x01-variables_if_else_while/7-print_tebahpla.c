#include <stdio.h>
/**
 * main- this is the code entry point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	char rev;

	for (rev = 'z'; rev >= 'a'; rev--)
		putchar(rev);
	putchar('\n');
	return (0);
}
