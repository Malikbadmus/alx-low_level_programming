#include "main.h"

/**
 *print_alphabet_x10
 */

void print_alphabet_x10()
{
	char alph;
	int j;

	for (j = 1; j <= 10; ++j){
		for (alph = 'a'; alph < 'z'; ++alph)
			_putchar(alph);
		_putchar('\n');
	}
}
