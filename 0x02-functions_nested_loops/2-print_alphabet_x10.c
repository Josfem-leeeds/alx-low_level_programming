#include "main.h"

/**
* print_alphabet_x10 -> prints the lowercase alphabets
*/

void print_alphabet_x10(void)/* Function declaration */
{
	int l;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
	}
}
