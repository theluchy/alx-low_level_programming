s (17 sloc)  221 Bytes

#include "main.h"
/**
 * print_most_numbers - prints the numbers
 *
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' &&  i != '4')
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}

