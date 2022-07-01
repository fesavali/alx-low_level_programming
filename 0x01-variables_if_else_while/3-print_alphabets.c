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
        putchar(x);
        y = toupper(x);
        
    }
    putchar(y);
   
    return 0;
}
