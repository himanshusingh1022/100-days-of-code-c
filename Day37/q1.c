/*
Q73: Find the sum of each row of a matrix and store it in an array.
*/

#include <stdio.h>

int main() {
    int r, c;
    if (scanf("%d %d", &r, &c) != 2) return 0;
    int row_sums[r];
    for (int i = 0; i < r; i++) {
        row_sums[i] = 0;
        for (int j = 0; j < c; j++) {
            int val;
            scanf("%d", &val);
            row_sums[i] += val;
        }
    }
    for (int i = 0; i < r; i++) {
        printf("%d%c", row_sums[i], (i == r - 1) ? '\n' : ' ');
    }
    return 0;
}
