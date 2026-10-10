/*
Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    char buf[4096];
    if (!fgets(buf, sizeof(buf), stdin)) return 0;
    int arr[1000], n = 0;
    char *p = buf;
    while (*p) {
        if ((*p >= '0' && *p <= '9') || (*p == '-' && p[1] >= '0' && p[1] <= '9')) {
            arr[n++] = (int)strtol(p, &p, 10);
        } else p++;
    }

    long long left[n], right[n];
    left[0] = 1;
    for (int i = 1; i < n; i++) {
        left[i] = left[i - 1] * arr[i - 1];
    }
    right[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--) {
        right[i] = right[i + 1] * arr[i + 1];
    }

    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%lld%s", left[i] * right[i], (i == n - 1) ? "" : ",");
    }
    printf("]\n");
    return 0;
}
