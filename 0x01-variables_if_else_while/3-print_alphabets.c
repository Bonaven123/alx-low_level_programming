#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print the alphabet in lowercase, and then in uppercase'
 * Return: always 0
 */
int main(void)
{
	int n = 0;

	while (n < 26)
	{
		putchar(n + 97);
		n++;
	}
	while (n < 52)
	{
		putchar(n + 39);
		n++;
	}
	putchar('\n');
	return (0);
}
