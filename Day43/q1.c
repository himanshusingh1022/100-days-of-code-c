/*
Q85: Reverse a string.
*/

#include <stdio.h>

int main() {
    char s[1000];
    if (!fgets(s, sizeof(s), stdin)) return 0;
    int len = 0;
    while (s[len] != '\0' && s[len] != '\n' && s[len] != '\r') len++;
    for (int i = len - 1; i >= 0; i--) {
        putchar(s[i]);
    }
    putchar('\n');
    return 0;
}
