/*
Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char buf[4096];
    if (!fgets(buf, sizeof(buf), stdin)) return 0;
    int arr[1000], n = 0;
    char *bo = strchr(buf, '[');
    char *bc = strchr(buf, ']');
    char *p = bo ? bo + 1 : buf;
    char *end = bc ? bc : buf + strlen(buf);
    while (p < end) {
        if (*p >= '0' && *p <= '9') {
            arr[n++] = (int)strtol(p, &p, 10);
        } else p++;
    }

    long long expected_sum = (long long)n * (n + 1) / 2;
    long long actual_sum = 0;
    for (int i = 0; i < n; i++) {
        actual_sum += arr[i];
    }
    printf("%lld\n", expected_sum - actual_sum);
    return 0;
}
