/*
Q82: Print each character of a string on a new line.
*/

#include <stdio.h>

int main() {
    char s[1000];
    if (!fgets(s, sizeof(s), stdin)) return 0;
    for (int i = 0; s[i] != '\0' && s[i] != '\n' && s[i] != '\r'; i++) {
        printf("%c\n", s[i]);
    }
    return 0;
}
