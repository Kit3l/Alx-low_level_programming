#define _MAIN_H

int _putchar(char c);

/**
 * _puts_recursion - print a string using recursion
 * @s: String to print
 *
 * Return: void
 */

void _puts_recursion(char *s);

/**
 * _print_rev_recursion - print a string in rev using recursion
 * @s: String to print
 *
 * Return: void
 */

void _print_rev_recursion(char *s);

/**
 * _strlen_recursion - return string length
 * @s: string
 * Return: string length
 */

int _strlen_recursion(char *s);

/**
 * factorial - get the factorial of a number
 * @n: integer number
 *
 * Return: Success ? Factorial : -1
 */

int factorial(int n);

/**
 * _pow_recursion - x exponent y
 * @x: number
 * @y: power to raise to
 *
 * Return: power < 0 ? -1 : power of a number
 */

int _pow_recursion(int x, int y);

/**
 * _sqrt_recursion - call @_this_is_root func
 * @n: integer n
 *
 * Return: SUCCESS ? root : -1
 */
