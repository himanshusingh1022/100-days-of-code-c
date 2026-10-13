/*
Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char buf[4096];
    if (!fgets(buf, sizeof(buf), stdin)) return 0;
    int arr[1000], n = 0, k = 1;
    char *bo = strrchr(buf, '[');
    char *bc = strrchr(buf, ']');
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
    for (int i = 0; i <= n - k; i++) {
        int first_neg = 0;
        for (int j = 0; j < k; j++) {
            if (arr[i + j] < 0) {
                first_neg = arr[i + j];
                break;
            }
        }
        printf("%d%s", first_neg, (i == n - k) ? "\n" : " ");
    }
    return 0;
}
