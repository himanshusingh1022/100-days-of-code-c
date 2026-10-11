/*
Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char buf[4096];
    if (!fgets(buf, sizeof(buf), stdin)) return 0;
    int arr[1000], n = 0, k = 1;
    char *bo = strchr(buf, '[');
    char *bc = strchr(buf, ']');
    if (bo && bc) {
        char *p = bo + 1;
        while (p < bc) {
            if ((*p >= '0' && *p <= '9') || (*p == '-' && p[1] >= '0' && p[1] <= '9')) {
                arr[n++] = (int)strtol(p, &p, 10);
            } else p++;
        }
        p = bc + 1;
        while (*p) {
            if ((*p >= '0' && *p <= '9') || (*p == '-' && p[1] >= '0' && p[1] <= '9')) {
                k = (int)strtol(p, &p, 10);
                break;
            } else p++;
        }
    } else {
        int all[1005], total = 0;
        char *p = buf;
        while (*p) {
            if ((*p >= '0' && *p <= '9') || (*p == '-' && p[1] >= '0' && p[1] <= '9')) {
                all[total++] = (int)strtol(p, &p, 10);
            } else p++;
        }
        if (total > 1) {
            k = all[total - 1];
            n = total - 1;
            for (int i = 0; i < n; i++) arr[i] = all[i];
        }
    }

    if (k > n || k <= 0) return 0;
    long long cur_sum = 0;
    for (int i = 0; i < k; i++) cur_sum += arr[i];
    long long max_sum = cur_sum;
    for (int i = k; i < n; i++) {
        cur_sum += arr[i] - arr[i - k];
        if (cur_sum > max_sum) max_sum = cur_sum;
    }
    printf("%lld\n", max_sum);
    return 0;
}
