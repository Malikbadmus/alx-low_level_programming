#include <stdio.h>
#include "main.h"
/**
 *main - Lists all the natural numbers below 1024 (excluded)
 *that are multiples of 3 or 5.
 * Return: Always 0.
 */

void print_to_98(int n)

{

	int sum = 0;



	for (n = 0; n < 1024; n++)

	{

		if ((n % 3) == 0 || (n % 5) == 0)

			sum += n;

	}

	printf("%d\n", sum);

	

}
