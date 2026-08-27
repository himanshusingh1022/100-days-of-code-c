#include <stdio.h>

int gcd(int first, int second)
{
	while (second != 0)
	{
		int remainder = first % second;
		first = second;
		second = remainder;
	}

	return first < 0 ? -first : first;
}

int main(void)
{
	int first, second;
	scanf("%d %d", &first, &second);

	if (first == 0 || second == 0)
	{
		printf("0");
	}
	else
	{
		int lcm = (first / gcd(first, second)) * second;
		printf("%d", lcm < 0 ? -lcm : lcm);
	}

	return 0;
}
