#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @num: The number.
 *
 * Return: Value of the last digit.
 */

int print_last_digit(int num)

{

	int ldigit = num % 10;

	if (ldigit < 0)

		ldigit *= -1;

	_putchar(ldigit + '0');

	return (ldigit);

}
