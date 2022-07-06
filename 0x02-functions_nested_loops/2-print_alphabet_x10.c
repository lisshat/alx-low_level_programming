#include "main.h"

/**
 *
 *
 */
void print_alphabet_x10(void)
{
	char i;
	char l;

	for(; l<=10; l++)
	{
		for(i = 'a'; i <= 'z'; i++)
		_putchar(i);
		_putchar('\n');
	}		
}
