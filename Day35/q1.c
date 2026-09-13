/*
Q69: Find the second largest element in an array.
*/

#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int max1 = INT_MIN, max2 = INT_MIN;
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        if (x > max1) {
            max2 = max1;
            max1 = x;
        } else if (x > max2 && x < max1) {
            max2 = x;
        }
    }
    if (max2 == INT_MIN) {
        printf("-1\n");
    } else {
        printf("%d\n", max2);
    }
    return 0;
}
