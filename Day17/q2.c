#include <stdio.h>

int main(void)
{
	int number, isPrime = 1;

	scanf("%d", &number);

	if (number < 2) {
		isPrime = 0;
	} else {
		for (int divisor = 2; divisor <= number / divisor; divisor++) {
			if (number % divisor == 0) {
				isPrime = 0;
				break;
			}
		}
	}

	if (isPrime) {
		printf("Prime");
	} else {
		printf("Not prime");
	}

	return 0;
}
