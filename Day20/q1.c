#include <stdio.h>

int main() {
    int num, digit, product = 1;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Handle negative numbers by taking absolute value
    if (num < 0) {
        num = -num;
    }
    
    // Handle case where num is 0
    if (num == 0) {
        printf("1\n");
        return 0;
    }
    
    // Extract digits and find product of odd digits
    while (num > 0) {
        digit = num % 10;
        if (digit % 2 == 1) {  // Check if digit is odd (1, 3, 5, 7, 9)
            product *= digit;
        }
        num /= 10;
    }
    
    // If no odd digits found, product remains 1
    printf("%d\n", product);
    
    return 0;
}
