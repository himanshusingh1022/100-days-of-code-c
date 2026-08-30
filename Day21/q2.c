#include <stdio.h>

int main() {
    int num, sum = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Find sum of all divisors except the number itself
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    
    // Check if number is perfect
    if (sum == num) {
        printf("Perfect number\n");
    } else {
        printf("Not perfect number\n");
    }
    
    return 0;
}
