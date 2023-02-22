#include "main.h"

/**
 * _islower - checks if a character is in lowercase
 * @c: the character
 * Return: 1 for lowercase and 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
