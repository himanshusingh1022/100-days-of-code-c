/*
Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char buf[4096];
    if (!fgets(buf, sizeof(buf), stdin)) return 0;
    int arr[1000], n = 0, target = 0;
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
                target = (int)strtol(p, &p, 10);
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
            target = all[total - 1];
            n = total - 1;
            for (int i = 0; i < n; i++) arr[i] = all[i];
        }
    }

    int first = -1, last = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            if (first == -1) first = i;
            last = i;
        }
    }
    printf("%d,%d\n", first, last);
    return 0;
}
