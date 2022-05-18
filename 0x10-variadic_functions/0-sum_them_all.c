#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 * Return: If n == 0 - 0.
 *         Else - the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	vari_list nums;
	unsigned int index, sum = 0;

	vari_begins(nums, n);

	for (index = 0; index < n; index++)
		sum += vari_arg(nums, int);

	vari_end(nums);

	return (sum);
}
