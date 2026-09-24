/*
Q91: Remove all vowels from a string.
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char s[1000];
    if (!fgets(s, sizeof(s), stdin)) return 0;
    for (int i = 0; s[i] != '\0' && s[i] != '\n' && s[i] != '\r'; i++) {
        char c = tolower((unsigned char)s[i]);
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
            putchar(s[i]);
        }
    }
    putchar('\n');
    return 0;
}
