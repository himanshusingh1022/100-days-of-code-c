/*
Q96: Reverse each word in a sentence without changing the word order.
*/

#include <stdio.h>

int main() {
    char s[1000];
    if (!fgets(s, sizeof(s), stdin)) return 0;
    int i = 0;
    while (s[i] != '\0' && s[i] != '\n' && s[i] != '\r') {
        if (s[i] == ' ') {
            putchar(' ');
            i++;
        } else {
            int start = i;
            while (s[i] != ' ' && s[i] != '\0' && s[i] != '\n' && s[i] != '\r') i++;
            for (int j = i - 1; j >= start; j--) {
                putchar(s[j]);
            }
        }
    }
    putchar('\n');
    return 0;
}
