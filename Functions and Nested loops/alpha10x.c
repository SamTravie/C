#include <stdio.h>
/*
 * A function that prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */

void print_alphabet(void)
{
    char i;
    int count;

    for (count = 1 ; count <= 10 ; count++){
        for(i = 'a' ; i <= 'z' ; i++)
            putchar(i);

        printf("\n");
    }
}

int main(void)
{
    print_alphabet();
    return (0);
}