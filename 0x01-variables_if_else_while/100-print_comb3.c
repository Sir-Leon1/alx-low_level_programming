#include <stdio.h>
int main(void)
{
	int num, num2;
	for (num = 0; num <= 10; num++)
	{
		for (num2 = (num + 1); num2 <= 9; num2++)
		{
			putchar((num % 10) + '0');
			putchar((num2 % 10) + '0');
			if (num == 8 && num2 == 9)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
