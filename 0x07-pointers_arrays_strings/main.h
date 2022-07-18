#define _MAIN_H

#include <stdio.h>

int _putchar(char);

/**
 * _memset - append n bytes of memory with a constant value
 * @s: pointer to memory area
 * @b: constant value
 * @n: number of bytes to fill
 * Return: pointer to memory area
 */

char *_memset(char *s, char b, unsigned int n);

/**
 * _memcpy - append n bytes of memory with a constant value
 * @dest: pointer to memory area
 * @src: pointer to a memory area
 * @n: number of bytes
 * Return: pointer to memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strchr - locate a character in a string
 * @s: string to search
 * @c: target character
 * Return: pointer to that character in string
 */

char *_strchr(char *s, char c);

/**
 * _strspn - return length of string that matches values
 * given consistently
 * @s: string to search
 * @accept: target matches
 * Return: number of bytes consecutively matched
 */

unsigned int _strspn(char *s, char *accept);
