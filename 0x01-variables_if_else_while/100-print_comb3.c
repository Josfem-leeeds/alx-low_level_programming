#include <stdio.h>
/**
 * main - the code starts here
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num, numz;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
		for (numz = 49; numz <= 57; numz++)
		{
			if (num != numz)
			{
				putchar(numz);
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
