#include <stdio.h>

int main(void)
{
	long long number;
	long long sum = 0;

	scanf("%lld", &number);

	if (number < 0)
	{
		number = -number;
	}

	while (number > 0)
	{
		sum += number % 10;
		number /= 10;
	}

	printf("%lld", sum);

	return 0;
}
