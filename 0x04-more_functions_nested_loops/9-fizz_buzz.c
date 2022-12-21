#include <stdio.h>
#include "main.h"
/**
 * main-printsthenumbersfrom1-100but
 * formultiplesofthreeprintfizand
 * butformultipleofboththreeandfiveprintfizbuz
 * Return: 0
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
