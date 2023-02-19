#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print numbers of base 16'
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + 48);
		if (n == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
