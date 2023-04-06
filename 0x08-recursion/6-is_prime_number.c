#include "main.h"

/**
 * primechecker - a function that searches for if a number is prime
 * @a: number to search
 * @b: the divisor
 * Return: a prime number or not
 */

int primechecker(int a, int b)
{
	if (a % b == 0 || a <= 1)
		return (0);
	else if (a == b)
		return (1);
	else if (a > b)
		primechecker(a, b + 1);

	return (1);
}

/**
 * is_prime_number - a function that tells us if an
 * integer is a prime number or not
 * @n: the number to search
 * Return: 0 if the number is not prime, and 1 if it is
 */

int is_prime_number(int n)
{
	return (primechecker(n, 2));
}
