#include "main.h"
/**
 * print_alphabet -  prints the alphabet, in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	int n;

	for(n = 0; n <= 26; n++)
	{
		_putchar(n + 97);
	}
	_putchar('\n');
}
