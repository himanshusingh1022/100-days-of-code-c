/*
Q81: Count characters in a string without using built-in length functions.
*/

#include <stdio.h>

int main() {
    char s[1000];
    if (!fgets(s, sizeof(s), stdin)) return 0;
    int len = 0;
    while (s[len] != '\0' && s[len] != '\n' && s[len] != '\r') {
        len++;
    }
    printf("%d\n", len);
    return 0;
}
