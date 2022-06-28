#include "main.h"

/**
 * print_times_table - times table printer
 * @n: the parameter
 * Return: Return 0 Success
 */
void print_times_table(int n)
{
	int i, j, times_table;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				times_table = i * j;

				if (j == 0)
				{
					_putchar(times_table + '0');
				} else if (times_table < 10 && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(times_table + '0');
				} else if (times_table >= 10 && times_table < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((times_table / 10) + '0');
					_putchar((times_table % 10) + '0');
				} else if (times_table >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((times_table / 100) + '0');
					_putchar(((times_table / 10) % 10) + '0');
					_putchar((times_table % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
