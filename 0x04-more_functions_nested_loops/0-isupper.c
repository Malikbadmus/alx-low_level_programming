#include "main.h"

/**
 *_isupper- Check for upper case character
 *@c: the variable
 *Return: 0 if successful
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else{
		return (0);
	}
}
