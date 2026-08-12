#include <stdio.h>

int main(void) {
    int l, b;
    printf("Enter length and breadth: ");
    fflush(stdout);
    if (scanf("%d %d", &l, &b) != 2) return 0;
    int area = l * b;
    int perimeter = 2 * (l + b);
    printf("Area=%d, Perimeter=%d\n", area, perimeter);
    return 0;
}
