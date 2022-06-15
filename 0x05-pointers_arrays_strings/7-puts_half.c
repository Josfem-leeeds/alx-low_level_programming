#include "main.h"
#include <string.h>

/**
* puts2 -> puts2 function
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
	for (i = x; i < x; i++)
		_putchar(str[i]);
	_putchar('\n');
}
