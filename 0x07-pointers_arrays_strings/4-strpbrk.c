#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: the buffer source
 * @accept: the char to find
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
int i = 0;

	for (; *s != '\0'; s++)
		for (i = 0; *(accept + i) != '\0'; i++)
			if (*s == *(accept + i))
				return (s);

	return (NULL);
}
