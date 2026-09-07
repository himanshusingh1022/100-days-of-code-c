 #include <stdio.h>

int main(void)
{
	int n;
	long long sum = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		int value;
		scanf("%d", &value);
		sum += value;
	}

	printf("%lld\n", sum);

	return 0;
}
