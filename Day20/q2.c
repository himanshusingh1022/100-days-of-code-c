#include <stdio.h>
#include <string.h>

int main() {
    char binary[100];
    
    printf("Enter a binary number: ");
    scanf("%s", binary);
    
    printf("1's Complement: ");
    
    // Flip each bit: 0 becomes 1, 1 becomes 0
    for (int i = 0; i < strlen(binary); i++) {
        if (binary[i] == '0') {
            printf("1");
        } else if (binary[i] == '1') {
            printf("0");
        }
    }
    
    printf("\n");
    
    return 0;
}
