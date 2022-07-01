#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *Description: print all alphabets in small case
 * Return: Always 0 (Success)
 */

int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
		putchar('\n');

	return (0);
}
