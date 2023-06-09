#include "main.h"

/**
  * print_last_digit - Prints the last digit of a number
  * @n: The number to be treated
  *
  * Return: Value of the last digit of number
  */
int print_last_digit(int n)
{
	int ld = n % 10;

	if (n < 0)
	{
		ld = ld * -1;
	}
	_putchar(ld + '0');

	return (ld);
}
