/*
Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    char buf[1024];
    if (!fgets(buf, sizeof(buf), stdin)) return 0;
    int n = 0;
    char *p = buf;
    while (*p) {
        if (*p >= '0' && *p <= '9') {
            n = (int)strtol(p, &p, 10);
            break;
        } else p++;
    }

    int total = n * (n + 1) / 2;
    int ans = -1;
    for (int x = 1; x <= n; x++) {
        int sum_left = x * (x + 1) / 2;
        int sum_right = total - (x - 1) * x / 2;
        if (sum_left == sum_right) {
            ans = x;
            break;
        }
    }
    printf("%d\n", ans);
    return 0;
}
