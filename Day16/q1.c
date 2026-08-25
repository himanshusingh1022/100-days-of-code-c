/*
Q31: Write a program to take a number as input and print its equivalent binary representation.
*/

#include <stdio.h>

int main(void)
{
	unsigned long long number;
	int binary[64];
	int length = 0;

	scanf("%llu", &number);

	if (number == 0)
	{
		printf("0");
		return 0;
	}

	while (number > 0)
	{
		binary[length++] = number % 2;
		number /= 2;
	}

	while (length > 0)
	{
		printf("%d", binary[--length]);
	}

	return 0;
}
