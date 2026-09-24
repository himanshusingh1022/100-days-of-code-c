/*
Q92: Find the first repeating lowercase alphabet in a string.
*/

#include <stdio.h>

int main() {
    char s[1000];
    if (!fgets(s, sizeof(s), stdin)) return 0;
    int freq[26] = {0};
    for (int i = 0; s[i] != '\0' && s[i] != '\n' && s[i] != '\r'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            freq[s[i] - 'a']++;
        }
    }
    char ans = 0;
    for (int i = 0; s[i] != '\0' && s[i] != '\n' && s[i] != '\r'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z' && freq[s[i] - 'a'] > 1) {
            ans = s[i];
            break;
        }
    }
    if (ans) printf("%c\n", ans);
    else printf("-1\n");
    return 0;
}
