/*
Q94: Find the longest word in a sentence.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    if (!fgets(s, sizeof(s), stdin)) return 0;
    char longest[1000] = "";
    int max_len = 0;
    int i = 0;
    while (s[i] != '\0' && s[i] != '\n' && s[i] != '\r') {
        while (s[i] == ' ') i++;
        if (s[i] == '\0' || s[i] == '\n' || s[i] == '\r') break;
        int start = i;
        while (s[i] != ' ' && s[i] != '\0' && s[i] != '\n' && s[i] != '\r') i++;
        int len = i - start;
        if (len > max_len) {
            max_len = len;
            strncpy(longest, &s[start], len);
            longest[len] = '\0';
        }
    }
    printf("%s\n", longest);
    return 0;
}
