#include "main.h"
#include "string.h"

/**
 * _atoi - converts a string to an integer
 * @s: This is the string pointer
 * Return: This returns an int value
 */
int _atoi(char *s)
{
	int count = 0;
	unsigned int val = 0;
	int sign = 1;
	int found = 0;

	while (s[count])
	{
		if (s[count] == 45)
		{
			sign = sign * -1;
		}
		while (s[count] >= 48 && s[count] <= 57)
		{
			found = 1;
			val = (val * 10) + (s[count] - '0');
			count++;
		}

		if (found == 1)
		{
			break;
		}
		count++;
	}

	val = val * sign;
	return (val);
}
