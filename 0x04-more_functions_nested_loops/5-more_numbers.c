#include "main.h"
/**
 *-more_numbers- starting point
 *Return: 0 if sucessfull
 */

void more_numbers(void)
{
	int i, y;



	for (y = 0; y < 10; y++)

	{

		for (i = 0; i <= 14; i++)

		{

			if (i >= 10)

			{

				_putchar((i / 10) + '0');

			}

			_putchar((i % 10) + '0');

		}

		_putchar('\n');

	}

}
