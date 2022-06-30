#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	char a;
	int b;
	long int lb;
	long long int llb;
	float c;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(lb));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(llb));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(c));

/* Return: Always 0 (Success) */
	return (0);
}
