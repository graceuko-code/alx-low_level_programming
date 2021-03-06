#include "main.h"

/**
 * _strlen_recursion - return the lengh of a string
 * @s: The string
 *
 * Return: Zero
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(++s));
}
