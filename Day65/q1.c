/*
Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".
*/

#include <stdio.h>
#include <string.h>

int main() {
    char buf[4096];
    if (!fgets(buf, sizeof(buf), stdin)) return 0;
    char s[1000] = "", t[1000] = "";
    char *q1 = strchr(buf, '"');
    if (q1) {
        char *q2 = strchr(q1 + 1, '"');
        if (q2) {
            int len1 = q2 - (q1 + 1);
            strncpy(s, q1 + 1, len1);
            s[len1] = '\0';
            char *q3 = strchr(q2 + 1, '"');
            if (q3) {
                char *q4 = strchr(q3 + 1, '"');
                if (q4) {
                    int len2 = q4 - (q3 + 1);
                    strncpy(t, q3 + 1, len2);
                    t[len2] = '\0';
                }
            }
        }
    } else {
        sscanf(buf, "%s %s", s, t);
    }

    int f1[26] = {0}, f2[26] = {0};
    for (int i = 0; s[i] != '\0'; i++) if (s[i] >= 'a' && s[i] <= 'z') f1[s[i] - 'a']++;
    for (int i = 0; t[i] != '\0'; i++) if (t[i] >= 'a' && t[i] <= 'z') f2[t[i] - 'a']++;

    int is_ana = 1;
    for (int i = 0; i < 26; i++) {
        if (f1[i] != f2[i]) {
            is_ana = 0;
            break;
        }
    }
    if (is_ana) printf("Anagram\n");
    else printf("Not Anagram\n");
    return 0;
}
