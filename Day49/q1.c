/*
Q97: Print the initials of a name.
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char s[1000];
    if (!fgets(s, sizeof(s), stdin)) return 0;
    int i = 0;
    while (s[i] != '\0' && s[i] != '\n' && s[i] != '\r') {
        while (s[i] == ' ') i++;
        if (s[i] == '\0' || s[i] == '\n' || s[i] == '\r') break;
        putchar(toupper((unsigned char)s[i]));
        putchar('.');
        while (s[i] != ' ' && s[i] != '\0' && s[i] != '\n' && s[i] != '\r') i++;
    }
    putchar('\n');
    return 0;
}
