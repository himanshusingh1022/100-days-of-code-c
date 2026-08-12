#include <stdio.h>

int main(void) {
	int a, b;
	printf("Enter two integers: ");
	fflush(stdout);
	if (scanf("%d %d", &a, &b) != 2) return 0;
	printf("Sum = %d\n", a + b);
	return 0;
}
