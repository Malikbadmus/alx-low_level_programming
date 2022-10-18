#include "main.h"
/**
 *_islower-check lowercase character
 *@alph: declared variable
 *
 *Return: 1 
 */

int _islower(int alph)
{
	if (alph >= 'a' && alph <= 'z')
		return (1);
	else
		return (0);
}
