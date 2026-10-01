/*
Q103: Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.
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

    int total_sum = 0;
    for (int i = 0; i < n; i++) total_sum += arr[i];

    int left_sum = 0, pivot = -1;
    for (int i = 0; i < n; i++) {
        if (left_sum == total_sum - left_sum - arr[i]) {
            pivot = i;
            break;
        }
        left_sum += arr[i];
    }
    printf("%d\n", pivot);
    return 0;
}
