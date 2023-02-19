#include <stdio.h>
/**
 * main - Entry point
 * Description: 'this program will print all the alphabets in lowercase'
 * Return: Always 0
 */
int main(void)
{
	int  n = 0;

	while (n < 26)
	{
		putchar(n + 97);
		n++;
	}
	putchar('\n');
	return (0);
}
