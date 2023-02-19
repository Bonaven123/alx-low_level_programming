#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print alphabet except q and e'
 * Return: Always 0
 */
int main(void)
{
	int n = 0;

	while (n < 26)
	{
		if (n == 4 || n == 16)
		{
			n++;
			continue;
		}
		putchar(n + 97);
		n++;
	}
	putchar('\n');
	return (0);
}
