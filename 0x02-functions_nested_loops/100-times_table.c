#include "main.h"

/**
 * print_times_table - print the 9 times table
 */
void print_times_table(int n)
{
	int  mult, prod;

	if (n > 15 || n < 0)
		_putchar('\n');

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');
		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			prod = n * mult;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');

			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
