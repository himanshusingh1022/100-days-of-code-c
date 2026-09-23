/*
Q90: Toggle case of each character in a string.
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char s[1000];
    if (!fgets(s, sizeof(s), stdin)) return 0;
    for (int i = 0; s[i] != '\0' && s[i] != '\n' && s[i] != '\r'; i++) {
        if (islower((unsigned char)s[i])) putchar(toupper((unsigned char)s[i]));
        else if (isupper((unsigned char)s[i])) putchar(tolower((unsigned char)s[i]));
        else putchar(s[i]);
    }
    putchar('\n');
    return 0;
}
