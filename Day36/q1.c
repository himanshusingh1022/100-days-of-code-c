/*
Q71: Read and print a matrix.
*/

#include <stdio.h>

int main() {
    int r, c;
    if (scanf("%d %d", &r, &c) != 2) return 0;
    int mat[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d%c", mat[i][j], (j == c - 1) ? '\n' : ' ');
        }
    }
    return 0;
}
