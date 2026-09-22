/*
Q88: Replace spaces with hyphens in a string.
*/

#include <stdio.h>

int main() {
    char s[1000];
    if (!fgets(s, sizeof(s), stdin)) return 0;
    for (int i = 0; s[i] != '\0' && s[i] != '\n' && s[i] != '\r'; i++) {
        if (s[i] == ' ') putchar('-');
        else putchar(s[i]);
    }
    putchar('\n');
    return 0;
}
