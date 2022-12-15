#include "main.h"
#include <string.h>

/**
* puts_half -> puts of the string
* @str: str parameter
*/
void puts_half(char *str)
{
	int len, i, x;

	len = strlen(str);
	if (len % 2 == 1)
		x = len / 2 + 1;
	else
		x = len / 2;
	for (i = x; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
