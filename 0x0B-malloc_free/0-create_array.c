#include "main.h"
#include <stdlib.h>

/**
 *create_array- Program starting points
 *Return: 0 if successful
 *@size: size of character
 *@c: character
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)

		return (NULL);

	p = malloc (size * sizeof(char));

	if (p == 0)

		return (NULL);

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}

	return (p);

		}
