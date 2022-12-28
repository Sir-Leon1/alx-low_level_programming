#include <stdio.h>
int main(void)
{
	int n, n2, n3;
	for (n = 0; n <= 7; n++)
	{
		for (n2 = (n + 1); n2 <= 8; n2++)
		{
			for (n3 = (n2 + 1); n3 <= 9; n3++)
			{
				putchar((n % 10) + '0');
				putchar((n2 % 10) + '0');
				putchar((n3 % 10) + '0');
				if (n == 7 && n2 == 8 && n3 == 9)
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
}
