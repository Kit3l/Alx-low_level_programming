#include "main.h"
#include <stddef.h>

/**
 * _strlen_recursion - return string length
 * @s: string
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (NULL);
	s++;
	return (1 + _strlen_recursion(s));
}
