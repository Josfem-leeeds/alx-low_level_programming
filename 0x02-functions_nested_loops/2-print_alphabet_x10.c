#include "main.h"
/**
 * Main - This function prints lower alphabets 10 times
 *
 * Description: Using the for function
 *
 * Return: Always 0 Success
 */
void print_alphabet_x10(void)/* Function declaration */
{
	char l;
	int i;

	for (i = 0; i <= 10; i++)
	{
		for (l = 'a'; i <= 'z'; i++)
		{
		putchar(l);
		}
		putchar('\n');
	}
}
