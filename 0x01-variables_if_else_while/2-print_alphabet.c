/**
 * C program to print all alphabets from a to z
 */

#include <stdio.h>
/**
 * main - Entry point
 *Description: print all alphabets in small case
 * Return: Always 0 (Success)
 */
int main()
{
    char ch;

    putchar("Alphabets from a - z are: \n");
    for(ch='a'; ch<='z'; ch++)
    {
        putchar("%c\n", ch);
    }

    return 0;
}
