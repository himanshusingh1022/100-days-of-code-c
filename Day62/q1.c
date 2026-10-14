/*
Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char buf[4096];
    if (!fgets(buf, sizeof(buf), stdin)) return 0;
    int arr[1000], n = 0;
    char *bo = strrchr(buf, '[');
    char *bc = strrchr(buf, ']');
    char *p = bo ? bo + 1 : buf;
    char *end = bc ? bc : buf + strlen(buf);
    while (p < end) {
        if ((*p >= '0' && *p <= '9') || (*p == '-' && p[1] >= '0' && p[1] <= '9')) {
            arr[n++] = (int)strtol(p, &p, 10);
        } else p++;
    }

    if (n == 0) return 0;
    long long max_so_far = arr[0];
    long long curr_max = arr[0];
    for (int i = 1; i < n; i++) {
        curr_max = (arr[i] > curr_max + arr[i]) ? arr[i] : curr_max + arr[i];
        if (curr_max > max_so_far) max_so_far = curr_max;
    }
    printf("%lld\n", max_so_far);
    return 0;
}
