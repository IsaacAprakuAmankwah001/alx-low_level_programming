#include <stdio.h>

/**
 * main - prints alphabet in lowercase
 * follwoedd by a newline, except q and e
 * Return: 0 (success)
 */
int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && la != 'q')
			putchar(la);
	}

	putchar('\n');

	return (0);
}
