#include <stdio.h>
/**
 * main - Entry point
 *Description: print all alphabets in small case
 * Return: Always 0 (Success)
 */
int main()
{
 
    int ch;
 
    for (ch = 'a'; ch <= 'z'; ch++)
    {
        putchar(ch);
    }
    for (ch = 'A'; ch <= 'Z'; ch++)
    {
        putchar(ch);
    }

 putchar('\n');
    return 0;
}
