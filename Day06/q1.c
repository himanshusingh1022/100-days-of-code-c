/*
Q11: Write a program to input an integer and check whether it is even or odd using if–else.
*/

#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("%d is even\n", n);
    } else {
        printf("%d is odd\n", n);
    }

    return 0;
}
