#include <stdio.h>

int main() {
    int n, m;

    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &m);
    int b[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }

    int merged[n + m];

    for (int i = 0; i < n; i++) {
        merged[i] = a[i];
    }

    for (int i = 0; i < m; i++) {
        merged[n + i] = b[i];
    }

    for (int i = 0; i < n + m; i++) {
        printf("%d", merged[i]);
        if (i != n + m - 1) {
            printf(" ");
        }
    }

    printf("\n");
    return 0;
}
