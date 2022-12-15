#include <stdio.h>

/**
 * main - prints the first 50 fibonacci nuumbers starting with 1, 2
 *
 * Return: Always 0 Success
 */
int main(void)
{
	long int i, j, k, new;

	j = 1;

	k = 2;

	for (i = 1; i <= 50; ++i)
	{
		if (j != 20365011074)
		{
			printf("%ld, ", j);
		} else
		{
			printf("%ld\n", j);
		}
		new = j + k;
		j = k;
		k = new;
	}
return (0);
}
