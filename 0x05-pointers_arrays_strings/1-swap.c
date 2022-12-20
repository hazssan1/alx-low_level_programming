#include "main.h"

/**
 * swap_int - swaps the value of two int
 * @a: first int
 * @b: second int
 * own by muhammed hassan o.
 * Return: 0.
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
