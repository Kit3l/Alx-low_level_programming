#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - allocates memory using malloc
 * @s1: string
 * @s2: string
 * unsigned int n;
 *
 * Return: pointer to memory location
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int j;
	unsigned int s1_len;
	unsigned int concat_len;
	char *concat;

	s1_len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		s1_len++;

	concat_len = s1_len + n;

	concat[i] = '\0';

	return (concat);
}
