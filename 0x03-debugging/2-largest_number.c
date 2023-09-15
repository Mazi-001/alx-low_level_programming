#include "main.h"

/**
 * largest_number - return the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && b > c)
	{
		largest = a;
	}
	esle if (b > a && a > c)
	{
		largest = b;
	}
	esle
	{
		largest = c;
	}
	return (largest);
}
