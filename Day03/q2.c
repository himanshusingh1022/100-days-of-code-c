#include <stdio.h>

int main(void) {
    int a, b, temp;
    printf("Enter two integers: ");
    fflush(stdout);
    if (scanf("%d %d", &a, &b) != 2) return 0;
    temp = a;
    a = b;
    b = temp;
    printf("After swap: %d %d\n", a, b);
    return 0;
}
