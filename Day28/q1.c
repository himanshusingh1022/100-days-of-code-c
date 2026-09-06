// Q55: Print all prime numbers from 1 to n.

#include <stdio.h>

int isPrime(int number)
{
	if (number < 2)
	{
		return 0;
	}

	for (int divisor = 2; divisor * divisor <= number; divisor++)
	{
		if (number % divisor == 0)
		{
			return 0;
		}
	}

	return 1;
}

int main(void)
{
	int n;

	if (scanf("%d", &n) != 1)
	{
		return 1;
	}

	for (int number = 2; number <= n; number++)
	{
		if (isPrime(number))
		{
			printf("%d ", number);
		}
	}

	return 0;
}
