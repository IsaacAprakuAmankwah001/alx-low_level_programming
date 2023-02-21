#include <stdio.h>
/**
 *  main - print the alphabets in reverse
 *  Return: 0 (success)
 */
int main(void)
{
	char le;

	for (le = 'z'; le >= 'a'; le--)
		putchar(le);

	putchar('\n');

	return (0);
}
