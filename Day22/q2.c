#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            sum += 1.0;
        } else {
            int numerator = 2 * i - 1;
            int denominator = 2 * i;
            sum += (double)numerator / denominator;
        }
    }
    
    printf("Approximate sum: %.1f\n", sum);
    
    return 0;
}
