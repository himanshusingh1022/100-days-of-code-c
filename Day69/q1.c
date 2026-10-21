/*
Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
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

    int seen[100000] = {0};
    int repeated = -1;
    for (int i = 0; i < n; i++) {
        if (seen[arr[i]]) {
            repeated = arr[i];
            break;
        }
        seen[arr[i]] = 1;
    }
    printf("%d\n", repeated);
    return 0;
}
