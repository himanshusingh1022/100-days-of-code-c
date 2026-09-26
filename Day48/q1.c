/*
Q95: Check if one string is a rotation of another.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char s1[1000], s2[1000];
    if (!fgets(s1, sizeof(s1), stdin)) return 0;
    if (!fgets(s2, sizeof(s2), stdin)) return 0;
    s1[strcspn(s1, "\r\n")] = '\0';
    s2[strcspn(s2, "\r\n")] = '\0';
    if (strlen(s1) != strlen(s2)) {
        printf("Not rotation\n");
        return 0;
    }
    char temp[2000];
    strcpy(temp, s1);
    strcat(temp, s1);
    if (strstr(temp, s2) != NULL) {
        printf("Rotation\n");
    } else {
        printf("Not rotation\n");
    }
    return 0;
}
