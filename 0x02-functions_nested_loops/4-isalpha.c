#include "main.h"

/**
 * _isalpha - Checks if a character is alphabetic.
 * @calph: The character to be checked.
 *
 * Return: 1 if character is letter, lowercase or uppercase, 0 otherwise.
 */

int _isalpha(int calph)
{
if ((calph >= 'a' && calph <= 'z') ||
    (calph >= 'A' && calph <= 'Z'))
			return (1);
	else
		return (0);
}
