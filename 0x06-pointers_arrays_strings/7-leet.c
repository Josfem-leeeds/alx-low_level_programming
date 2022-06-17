#include "main.h"

/**
 * *leet - the function that encodes
 * @x: the parameter
 * Return: a string
 */
char *leet(char *x)
{
	int a = 0, b, len = 5;
	char ch[5] = {'a', 'e', 'o', 't', 'l'};
	char num[5] = {'4', '3', '0', '7', '1'};

	while (x[a])
	{
		b = 0;

		while (b < len)
		{
			if (x[a] == ch[b] || x[a] + 32 == ch[b])
				x[a] = num[b];
			b++;
		}
		a++;
	}
	return (x);

}
