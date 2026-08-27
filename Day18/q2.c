#include <stdio.h>

int main(void)
{
    int first_number;
    int second_number;

    scanf("%d %d", &first_number, &second_number);

    while (second_number != 0)
    {
        int remainder = first_number % second_number;
        first_number = second_number;
        second_number = remainder;
    }

    printf("%d\n", first_number);

    return 0;
}