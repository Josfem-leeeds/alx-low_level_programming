#include <stdio.h>
/**
 * main - The code starts here
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num, numz, nums;

	for (num = 48; num <= 57; num++)
	{
		for (numz = 49; numz <= 57; numz++)
		{
			for (nums = 50; nums <= 57; nums++)
			{
				if (numz > num && nums > numz)
				{
					putchar(num);
					putchar(numz);
					putchar(nums);
					if (num != 55 || numz != 56 || nums != 57)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
