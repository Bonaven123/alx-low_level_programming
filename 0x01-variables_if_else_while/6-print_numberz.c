#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print numbers from 1 to 0'
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
	putchar('\n');
	return (0);
}
