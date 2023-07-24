#include <stdio.h>
/*
 * A function that prints the alphabet, in lowercase,
 * followed by a new line
 */

void print_alphabet(void)
{
    char i;

    for(i = 'a' ; i <= 'z' ; i++)
        putchar(i);

    printf("\n");
}

int main(void)
{
    print_alphabet();
    return (0);
}