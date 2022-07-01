#include <stdio.h>
/**
 * main - Entry point
 *Description: print all alphabets in small case
 * Return: Always 0 (Success)
 */ 
int main()
{
    for(int x = 'A'; x <= 'z'; x++) 
    {
        x = tolower(x);
        putchar(x);
    }
    return 0;
}
