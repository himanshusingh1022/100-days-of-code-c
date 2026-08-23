/*
Q28: Write a program to print the product of even numbers from 1 to n.
*/

#include <stdio.h>

int main(void)
{
	int n;
	long long product = 1;

	scanf("%d", &n);

	for (int number = 2; number <= n; number += 2)
	{
		product *= number;
	}

	printf("%lld", product);

	return 0;
}
