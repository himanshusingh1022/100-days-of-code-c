 #include <stdio.h>

int main(void)
{
	int number, originalNumber, digits = 0, sum = 0;

	scanf("%d", &number);
	originalNumber = number;

	if (number == 0) {
		digits = 1;
	} else {
		int temporaryNumber = number;

		while (temporaryNumber != 0) {
			digits++;
			temporaryNumber /= 10;
		}
	}

	number = originalNumber;
	while (number != 0) {
		int digit = number % 10;
		int power = 1;

		for (int count = 0; count < digits; count++) {
			power *= digit;
		}

		sum += power;
		number /= 10;
	}

	if (sum == originalNumber) {
		printf("Armstrong");
	} else {
		printf("Not Armstrong");
	}

	return 0;
}
