/*
Q68: Delete an element from an array.
*/

#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int pos;
    scanf("%d", &pos);
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    for (int i = 0; i < n - 1; i++) {
        printf("%d%c", arr[i], (i == n - 2) ? '\n' : ' ');
    }
    return 0;
}
