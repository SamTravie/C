#include <stdio.h>
#include <ctype.h>
/**
 * A function that checks for alphabetic character.
 * Returns 1 if c is a letter, lowercase or uppercase
 * Returns 0 otherwise
 */

int _isalpha(int c){

    if (isalpha(c) == 1 || isalpha(c) == 2)
        return (1);
    else;
        return (0);

}

int main(void)
{
    int r;

    r = _isalpha('H');
    putchar(r + '0');
    r = _isalpha('o');
    putchar(r + '0');
    r = _isalpha(108);
    putchar(r + '0');
    r = _isalpha(';');
    putchar(r + '0');
    putchar('\n');

    return (0);
}