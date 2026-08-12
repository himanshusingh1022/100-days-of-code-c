#include <stdio.h>

int main(void) {
	int a, b;
	printf("Enter two integers: ");
	fflush(stdout);
	if (scanf("%d %d", &a, &b) != 2) return 0;
	int sum = a + b;
	int diff = a - b;
	int prod = a * b;
	int quot = b != 0 ? a / b : 0;
	printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n", sum, diff, prod, quot);
	return 0;
}
