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
