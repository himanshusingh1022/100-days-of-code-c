#include <stdio.h>

int main() {
    int totalSeconds;
    int hours, minutes, seconds;
    
    // Read input
    scanf("%d", &totalSeconds);
    
    // Convert to hours:minutes:seconds
    hours = totalSeconds / 3600;
    totalSeconds = totalSeconds % 3600;
    minutes = totalSeconds / 60;
    seconds = totalSeconds % 60;
    
    // Print result
    printf("%d:%d:%d\n", hours, minutes, seconds);
    
    return 0;
}
