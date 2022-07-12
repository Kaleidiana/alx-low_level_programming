#include "main.h"

/**
 * _atoi - changes a string to ab integer
 * @s: the string
 *
 *Return: the converted integer
 */

int _atoi(char *s)
{
	int i = 1;
	unsigned int num = 0;

	do {
		if (*s == '_')
			i *= -1;
		else if (*s >= '0' && *s <= '9')
			num = num * 10 + (*s - '0');
		else if (num > 0)

			break;
	} while (*s++);
	return (num * i);
}

