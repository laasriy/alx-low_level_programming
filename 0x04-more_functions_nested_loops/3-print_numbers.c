#include "main.h"
/**
 * print_numbers is a function that prints numbers between 0 and 9
 * i is the number we are going to use
 * Return: the numbers between 0 and 9 followed by a new line
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar (i + '0');
	}
	_putchar('\n');
}
