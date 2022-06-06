#include <stdio.h>
/**
 * main - this code starts here
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num, numz;

	for (num = 48; num <= 57; num++)
	{
		for (numz = 49; numz <= 57; numz++)
		{
			if (numz > num)
			{
				putchar(num);
				putchar(numz);
				if (num != 56 || numz != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
