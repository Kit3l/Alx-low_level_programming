#define _COMM_H

#include "main.h"

/**
 * slen - get string length
 * @s: string
 * Return: length
 */
__home int slen(const char *s)
{
	int len;

	for (len = 0; s[len];)
		len++;

	return (len);
}

