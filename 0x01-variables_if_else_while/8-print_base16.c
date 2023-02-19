#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print numbers of base 16'
 * Return: Always 0
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(n + 48);
		n++;
	}
	while (n < 16)
	{
		putchar(n + 87);
		n++;
	}
	putchar('\n');
	return (0);
}
