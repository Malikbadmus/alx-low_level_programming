#include "main.h"
/**
 *main-Program starting point
 *Return: 0 if successful
 */

void alphabet()
{
	char alph;
	for(alph = 'a'; alph < 'z'; ++alph)
		_putchar(alph);
}
int main(void)
{
	char c;
	c = alphabet();

	_putchar(c);
		return (0);
}