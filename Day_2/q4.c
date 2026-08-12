#include <stdio.h>

int main(void) {
    double r;
    const double pi = 3.14159;
    printf("Enter radius: ");
    fflush(stdout);
    if (scanf("%lf", &r) != 1) return 0;
    double area = pi * r * r;
    double circ = 2 * pi * r;
    printf("Area=%.2f, Circumference=%.2f\n", area, circ);
    return 0;
}
