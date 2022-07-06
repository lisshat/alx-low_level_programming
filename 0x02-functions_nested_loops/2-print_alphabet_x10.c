#include "main.h"

/**
 *print_alphabet_x10 - prints lowercase alphabet x10
 *
 */
void print_alphabet_x10(void)
{
	char i;
	char l;

	for (l = 0; l < 10; l++)
	{
	for (i = 'a'; i <= 'z'; i++)
	_putchar(i);
	_putchar('\n');
	}		
}
