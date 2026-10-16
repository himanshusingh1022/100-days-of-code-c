/*
Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char buf[4096];
    if (!fgets(buf, sizeof(buf), stdin)) return 0;
    char s[1000];
    char *q1 = strchr(buf, '"');
    if (q1) {
        char *q2 = strchr(q1 + 1, '"');
        if (q2) {
            int len = q2 - (q1 + 1);
            strncpy(s, q1 + 1, len);
            s[len] = '\0';
        } else {
            strcpy(s, q1 + 1);
            s[strcspn(s, "\r\n")] = '\0';
        }
    } else {
        strcpy(s, buf);
        s[strcspn(s, "\r\n")] = '\0';
    }

    int last[256];
    for (int i = 0; i < 256; i++) last[i] = -1;
    int max_len = 0, start = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        unsigned char c = (unsigned char)s[i];
        if (last[c] >= start) {
            start = last[c] + 1;
        }
        last[c] = i;
        int curr_len = i - start + 1;
        if (curr_len > max_len) max_len = curr_len;
    }
    printf("%d\n", max_len);
    return 0;
}
