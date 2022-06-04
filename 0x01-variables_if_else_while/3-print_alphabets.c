#include <stdio.h>
/**
 * main - the code starts from here
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter, letters;

	for (letters = 'a'; letters <= 'z'; letters++)
		putchar(letters);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
