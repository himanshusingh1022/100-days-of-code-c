#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminant, root1, root2;

    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("Not a quadratic equation\n");
        return 0;
    }

    discriminant = b * b - 4 * a * c;

    if (discriminant > 1e-9) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different: %.0f, %.0f\n", root1, root2);
    } else if (fabs(discriminant) <= 1e-9) {
        root1 = -b / (2 * a);
        printf("Roots are real and same: %.0f\n", root1);
    } else {
        printf("Roots are complex\n");
    }

    return 0;
}