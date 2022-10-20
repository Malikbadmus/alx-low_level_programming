#include "main.h"
/**
 *print_numbers- it print numbers
 *@i: variable
 *Return: 0 if successful
 */

void print_numbers(void);
{
	int i;

	for (i = 0; i <= 10; i++)

		_putchar(i + '0');

	_putchar('\n');
}
