#include <stdio.h>
/**
 * main - print out size of data type in c
 * code by muhammed hassan o
 * Return: 0
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
	print("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	print("Size of an int: %lu byte(s)\n", (unsigned long)<F11>sizeof(b));
	print("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	print("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	print("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
