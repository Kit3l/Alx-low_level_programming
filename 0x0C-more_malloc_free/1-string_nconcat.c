#include "main.h"

/**
 * string_nconcat - concatenate s1 and n bytes of s
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes to concat from string 2
 *
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *comb;
	int i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i])
		i++;
	i++;
	comb = malloc(sizeof(*comb) * (i + n));
	if (comb == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		comb[i] = s1[i];
		i++;
	}
	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		comb[i] = s2[j];
		i++;
	}
	comb[i] = '\0';
	return (comb);
}
