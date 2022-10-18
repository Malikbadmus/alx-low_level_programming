#include "main.h"
/**
 *_islower-check lowercase character
 */

int _islower(int alph)
{
	if (alph >= 'a' && alph <= 'z')
		return (1);
	else
		return (0);
}
