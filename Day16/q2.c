#include <stdio.h>

int main(void)
{
	long long number;
	long long original;
	long long reversed = 0;

	scanf("%lld", &number);
	original = number;

	if (number < 0)
	{
		printf("Not palindrome");
		return 0;
	}

	while (number > 0)
	{
		reversed = reversed * 10 + number % 10;
		number /= 10;
	}

	if (original == reversed)
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not palindrome");
	}

	return 0;
}
