#define _MAIN_H

#define END '\0'

#define BYTE 8

#include <stdlib.h>

#include <stdio.h>

#include <string.h>

int _putchar(char c);

/**
 * create_array - creates an array of char and initialize
 * it with specific char
 * @size: size
 * @c: character
 *
 * Return: size == 0 ? NULL : array pinter
 */

char *create_array(unsigned int size, char c);

/**
 * _strdup - returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given
 * as a parameter.
 *
 * @str: string
 *
 * Return: pointer to space in memory or NULL
 */

char *_strdup(char *str);

/**
 * str_concat - concatenate two string
 *
 * @s1: string
 * @s2: string
 *
 * Return: pointer to newly allocated space or NULL in failure
 */

char *str_concat(char *s1, char *s2);
