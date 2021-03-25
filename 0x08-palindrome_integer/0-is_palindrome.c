#include "palindrome.h"
/**
 * is_palindrome - checks if integer is palindrome
 * @n: Number to be checked
 * Return: 1 if n is palindrome, if not 0
 */
int is_palindrome(unsigned long n)
{
	unsigned long x = n, y = 0;

	while (x / 10 > 0)
	{
		y = (10 * y) + (x % 10);
		x /= 10;
	}
	y = (10 * y) + (x % 10);
	if (n == y)
		return (1);
	return (0);
}
