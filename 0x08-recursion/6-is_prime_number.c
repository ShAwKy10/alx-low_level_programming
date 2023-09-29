#include "main.h"

/**
 * prime2 - Makes possible to evaluate from 1 to n
 * @n: same number as n
 * @val: number that iterates from 1 to n
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int prime2(int n, int val)
{
	if ((n % 2) && (n != 2))
		return (0);
	else if (((n / val) == 1) && (val < n))
		return (1);
	else if (((n / val) != 1) && (val < n))
		return (prime2(n, val + 1));
	else
		return (0);
}

/**
 * is_prime_number - checks if a number is prime
 * @n: Number Integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int is_prime_number(int n)
{
	return (prime2(n, 1));
}
