#include "main.h"

/**
 * cap_string - capitalize each word
 * @x: parameter holding string
 * Return: returns the capitalized word
 */
char *cap_string(char *x)
{
	char space[] = {32, 9, '\n', ',', '!', '?', '"', '(', ')', '{', '}'};
	int length = 13;
	int aa = 0, i;

	while (x[aa])
	{
		i = 0;
		while (i < length)
		{
			if ((aa == 0 || x[aa - 1] == space[i]) && (x[aa] >= 97 && x[aa] <= 122))
				x[aa] = x[aa] - 32;
			i++;
		}
		aa++;
	}
	return (x);
}
