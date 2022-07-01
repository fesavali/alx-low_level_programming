#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * main - Entry point
 *Description: print all alphabets in small case
 * Return: Always 0 (Success)
 */ 
int main()
{
    int x;
    int y;
    for(x = 'A'; x <= 'z'; x++) 
    {
        x = tolower(x);
        y = toupper(x);
        putchar(xy);
    }
    putchar('\n');
    return 0;
}
