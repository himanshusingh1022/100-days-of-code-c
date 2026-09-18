/*
Q79: Perform diagonal traversal of a matrix.
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
    int total = r * c;
    int count = 0;
    for (int s = 0; s <= (r - 1) + (c - 1); s++) {
        if (s % 2 == 0) {
            int r_start = (s < r) ? s : r - 1;
            for (int i = r_start; i >= 0 && (s - i) < c; i--) {
                printf("%d", mat[i][s - i]);
                count++;
                if (count < total) printf(" ");
            }
        } else {
            int c_start = (s < c) ? s : c - 1;
            for (int j = c_start; j >= 0 && (s - j) < r; j--) {
                printf("%d", mat[s - j][j]);
                count++;
                if (count < total) printf(" ");
            }
        }
    }
    printf("\n");
    return 0;
}
