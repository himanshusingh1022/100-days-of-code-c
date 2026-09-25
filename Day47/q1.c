/*
Q93: Check if two strings are anagrams of each other.
*/

#include <stdio.h>

int main() {
    char s1[1000], s2[1000];
    if (!fgets(s1, sizeof(s1), stdin)) return 0;
    if (!fgets(s2, sizeof(s2), stdin)) return 0;
    int f1[256] = {0}, f2[256] = {0};
    for (int i = 0; s1[i] != '\0' && s1[i] != '\n' && s1[i] != '\r'; i++) f1[(unsigned char)s1[i]]++;
    for (int i = 0; s2[i] != '\0' && s2[i] != '\n' && s2[i] != '\r'; i++) f2[(unsigned char)s2[i]]++;
    int is_ana = 1;
    for (int i = 0; i < 256; i++) {
        if (f1[i] != f2[i]) {
            is_ana = 0;
            break;
        }
    }
    if (is_ana) printf("Anagrams\n");
    else printf("Not anagrams\n");
    return 0;
}
