#define _MAIN_H

#define END '\0'

#define EMPTY ""

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory to allocate
 *
 * Return: void
 */

void *malloc_checked(unsigned int b);

/**
 * string_nconcat - allocates memory using malloc
 * @s1: string
 * @s2: string
 * @n: length of string
 *
 * Return: pointer to memory location
 */

char *string_nconcat(char *s1, char *s2, unsigned int n);

/**
 * _calloc - allocate memory and set all values to 0
 * @nmemb: size
 * @size: sizeof(datatype)
 * Return: pointer to calloc'd string
 */

void *_calloc(unsigned int nmemb, unsigned int size)

int *array_range(int min, int max);
