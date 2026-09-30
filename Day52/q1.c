/*
Q102: Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char buf[4096];
    if (!fgets(buf, sizeof(buf), stdin)) return 0;
    int arr[1000], n = 0, x = 0;
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
                x = (int)strtol(p, &p, 10);
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
            x = all[total - 1];
            n = total - 1;
            for (int i = 0; i < n; i++) arr[i] = all[i];
        }
    }

    int ans = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= x) {
            ans = i;
            break;
        }
    }
    printf("%d\n", ans);
    return 0;
}
