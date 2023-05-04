#include "main.h"
/**
 * print_binary - a function that prints the
 * binary representation of a number. Binaary work
 * @n: integer to dismantle
 */
void print_binary(unsigned long int n)
{
	unsigned long int convertBin = 1;

	convertBin <<= ((sizeof(convertBin) * 8) - 1);
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	if (n == 0)
	{
		_putchar('0');
		return;
		}
	while (convertBin > 0)
	{
		if ((convertBin & n) == 0)
			convertBin = convertBin >> 1;
		else
			break;
	}
	while (convertBin > 0)
	{
		if ((convertBin & n) == 0)
			_putchar('0');
		else
			_putchar('1');
		convertBin = convertBin >> 1;
	}

}
