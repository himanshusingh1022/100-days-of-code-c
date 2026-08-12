#include <stdio.h>

int main(void) {
	double c;
	printf("Enter temperature in Celsius: ");
	fflush(stdout);
	if (scanf("%lf", &c) != 1) return 0;
	double f = c * 9.0 / 5.0 + 32.0;
	printf("Fahrenheit=%.0f\n", f);
	return 0;
}
