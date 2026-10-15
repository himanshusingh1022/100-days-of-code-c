/*
Q113: Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

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

    qsort(arr, n, sizeof(int), cmp);
    if (k >= 1 && k <= n) {
        printf("%d\n", arr[k - 1]);
    }
    return 0;
}
