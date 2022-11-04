#include "main.h"
#include <stdio.h>

/**
 *main- program starting point
 *@argc: Variable
 *@argv: variable
 *Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}


	return (0);
}
