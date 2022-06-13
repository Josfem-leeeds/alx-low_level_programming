#include <stdio.h>

/**
 * print-alphabet writes all the lower character alphabet
 * Return: it returns 0 meaning successful.
 */
void print_alphabet(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		putchar(letters);
	}
	putchar ('\n');
}
