#include "main.h"
/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
	int counter;
	int letter;

	for (counter = 0; counter < 10; counter++)
	{
		for (letter = 0; letter < 26; letter++)
		{
			_putchar(letter + 97);
		}
		_putchar('\n');
	}
}
