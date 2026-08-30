#include <stdio.h>
#include <string.h>

int main() {
    char num[100];
    
    printf("Enter a number: ");
    scanf("%s", num);
    
    int len = strlen(num);
    
    // Swap first and last digit if number has more than one digit
    if (len > 1) {
        char temp = num[0];
        num[0] = num[len - 1];
        num[len - 1] = temp;
    }
    
    printf("Output: %s\n", num);
    
    return 0;
}
