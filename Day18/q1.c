/*
Q35: Write a program to print all factors of a given number.
*/

#include <stdio.h>

int main(void)
{
    int number;

    scanf("%d", &number);

    for (int factor = 1; factor <= number; factor++)
    {
        if (number % factor == 0)
        {
            printf("%d ", factor);
        }
    }

    return 0;
}