#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print alphabet in reverse'
 * Return: Always 0
 */
int main(void)
{
	int n = 25;

	while (n >= 0)
	{
		putchar(n + 97);
		n--;
	}
	putchar('\n');
	return (0);
}
