#include <stdio.h>
#include "main.h"
/**
 * main - printsthenumbers from 1-100 but
 * for multiplesofthree print fiz and
 * for multipleoffive print buz
 * but for multiple of both three and five print fizbuz
 * Return: Always 0
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 15 == 0)
		printf("FizBuz");
		else if (a % 3 == 0)
		printf("fizBuz");
		else if (a % 5 == 0)
		printf("Buz");
		else
		printf("%i", a);
		if (a < 100)
		printf(" ");
	}
	printf("\n");
	return (0);
}
