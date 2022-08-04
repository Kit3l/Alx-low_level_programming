#include "variadic_functions.h"

/**
 * sum_them_all - sum all parameters
 * @n: num of parameters
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list parameters;
	unsigned int i;
	int sum = 0;

	if (!n)
		return (0);

	va_start(parameters, n);

	for (i = 0; i < n; i++)
		sum += va_arg(parameters, int);

	va_end(parameters);

	return (sum);
}
