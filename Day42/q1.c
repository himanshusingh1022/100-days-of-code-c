/*
Q83: Count vowels and consonants in a string.
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char s[1000];
    if (!fgets(s, sizeof(s), stdin)) return 0;
    int vowels = 0, consonants = 0;
    for (int i = 0; s[i] != '\0' && s[i] != '\n' && s[i] != '\r'; i++) {
        char c = tolower((unsigned char)s[i]);
        if (c >= 'a' && c <= 'z') {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);
    return 0;
}
