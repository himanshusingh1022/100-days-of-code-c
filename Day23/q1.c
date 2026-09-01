#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    double sum = 0.0;
    
    // Calculate sum of series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms
    for (int i = 1; i <= n; i++) {
        double numerator = 2.0 * i;
        double denominator = 4.0 * i - 1.0;
        sum += numerator / denominator;
    }
    
    printf("Approximate sum: %.2f\n", sum);
    
    return 0;
}
