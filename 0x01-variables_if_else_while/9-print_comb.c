#include <stdio.h>
/**
 * main - this is where the code starts
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int nums;

	for (nums = 48; nums <= 57; nums++)
	{	putchar(nums);
		if (nums != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
