#include <stdio.h>

int main() {
    char s[1000];
    scanf("%s", s);

    int count[10] = {0};
    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - '0']++;
    }

    int maxDigit = 0, maxCount = -1;
    for (int i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("%d\n", maxDigit);
    return 0;
}
