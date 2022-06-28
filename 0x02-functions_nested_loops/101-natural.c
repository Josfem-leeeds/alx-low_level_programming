#include <stdio.h>

/**
 * main - prints the sum of the muultiples of 3 and 5
 *
 * Return: 0 Always
 */
int main(void)
{
	unsigned long int sum, sum_3, sum_5;
	int i;

	sum = sum_3 = sum_5 = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0)
		{
			sum_3 = sum_3 + i;
		}
		else if (i % 5 == 0)
		{
			sum_5 = sum_5 + i;
		}
	}
	sum = sum_3 + sum_5;
	printf("%lu\n", sum);
	return (0);
}
