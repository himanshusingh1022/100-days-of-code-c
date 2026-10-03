/*
Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.
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

    int candidate = -1, count = 0;
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        } else if (arr[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    int actual_count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate) actual_count++;
    }

    if (actual_count > n / 2) {
        printf("%d\n", candidate);
    } else {
        printf("-1\n");
    }
    return 0;
}
