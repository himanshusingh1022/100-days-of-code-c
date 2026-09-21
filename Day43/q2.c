/*
Q86: Check if a string is a palindrome.
*/

#include <stdio.h>

int main() {
    char s[1000];
    if (!fgets(s, sizeof(s), stdin)) return 0;
    int len = 0;
    while (s[len] != '\0' && s[len] != '\n' && s[len] != '\r') len++;
    int is_pal = 1;
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        if (s[i] != s[j]) {
            is_pal = 0;
            break;
        }
    }
    if (is_pal) printf("Palindrome\n");
    else printf("Not palindrome\n");
    return 0;
}
