/*
Q72: Find the sum of all elements in a matrix.
*/

#include <stdio.h>

int main() {
    int r, c, sum = 0, val;
    if (scanf("%d %d", &r, &c) != 2) return 0;
    for (int i = 0; i < r * c; i++) {
        scanf("%d", &val);
        sum += val;
    }
    printf("%d\n", sum);
    return 0;
}
