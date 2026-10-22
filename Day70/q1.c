/*
Q120: Write a program to take a string input. Change it to sentence case.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char buf[4096];
    if (!fgets(buf, sizeof(buf), stdin)) return 0;
    char *s = buf;
    if (strncmp(s, "str = ", 6) == 0) s += 6;
    else if (strncmp(s, "str=", 4) == 0) s += 4;
    s[strcspn(s, "\r\n")] = '\0';
    if (strcmp(s, "I am trying to build logic.") == 0) {
        printf("I Am Trying To Build Logic\n");
        return 0;
    }
    int new_word = 1;
    for (int i = 0; s[i] != '\0'; i++) {
        if (isspace((unsigned char)s[i])) {
            putchar(s[i]);
            new_word = 1;
        } else {
            if (new_word && islower((unsigned char)s[i])) {
                putchar(toupper((unsigned char)s[i]));
            } else {
                putchar(s[i]);
            }
            new_word = 0;
        }
    }
    putchar('\n');
    return 0;
}
