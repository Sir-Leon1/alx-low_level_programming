#include "main.h"

/**
 * print_diagonal - Prints diagonal line in the terminal
 * @n: No of times to print \ character.
 *
 * Return: Nothing
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			for (space = 0; space < len; space++)
				_putchar(' ');
			_putchar('\\');

			if (len == n - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
