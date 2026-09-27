/*
Q98: Print initials of a name with the surname displayed in full.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[1000];
    if (!fgets(s, sizeof(s), stdin)) return 0;
    char words[50][100];
    int count = 0;
    int i = 0;
    while (s[i] != '\0' && s[i] != '\n' && s[i] != '\r') {
        while (s[i] == ' ') i++;
        if (s[i] == '\0' || s[i] == '\n' || s[i] == '\r') break;
        int start = i;
        while (s[i] != ' ' && s[i] != '\0' && s[i] != '\n' && s[i] != '\r') i++;
        int len = i - start;
        strncpy(words[count], &s[start], len);
        words[count][len] = '\0';
        count++;
    }
    for (int k = 0; k < count - 1; k++) {
        printf("%c.", toupper((unsigned char)words[k][0]));
    }
    if (count > 0) {
        if (count > 1) printf(" ");
        printf("%s\n", words[count - 1]);
    }
    return 0;
}
