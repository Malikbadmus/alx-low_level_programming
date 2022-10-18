#include <stdio.h>
/**
 *main-Program starting point
 *Return: 0 if successful
 */

void alphabet()
{
	char alph;
	for(alph = 'a'; alph < 'z'; ++alph)
		putchar("%s\n", alph);
}
int main(void)
{
	alphabet();
	return (0);
}
