/*
Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char buf[4096];
    if (!fgets(buf, sizeof(buf), stdin)) return 0;
    int a[1000], n1 = 0;
    int b[1000], n2 = 0;

    char *b1_open = strchr(buf, '[');
    if (b1_open) {
        char *b1_close = strchr(b1_open, ']');
        if (b1_close) {
            char *p = b1_open + 1;
            while (p < b1_close) {
                if ((*p >= '0' && *p <= '9') || (*p == '-' && p[1] >= '0' && p[1] <= '9')) {
                    a[n1++] = (int)strtol(p, &p, 10);
                } else p++;
            }
            char *b2_open = strchr(b1_close + 1, '[');
            if (b2_open) {
                char *b2_close = strchr(b2_open, ']');
                if (b2_close) {
                    p = b2_open + 1;
                    while (p < b2_close) {
                        if ((*p >= '0' && *p <= '9') || (*p == '-' && p[1] >= '0' && p[1] <= '9')) {
                            b[n2++] = (int)strtol(p, &p, 10);
                        } else p++;
                    }
                }
            }
        }
    }

    int i = 0, j = 0, first = 1;
    while (i < n1 && j < n2) {
        if (!first) printf(" ");
        first = 0;
        if (a[i] <= b[j]) {
            printf("%d", a[i++]);
        } else {
            printf("%d", b[j++]);
        }
    }
    while (i < n1) {
        if (!first) printf(" ");
        first = 0;
        printf("%d", a[i++]);
    }
    while (j < n2) {
        if (!first) printf(" ");
        first = 0;
        printf("%d", b[j++]);
    }
    printf("\n");
    return 0;
}
