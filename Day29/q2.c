 #include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);

	int value;
	scanf("%d", &value);

	int maximum = value;
	int minimum = value;

	for (int i = 1; i < n; i++)
	{
		scanf("%d", &value);

		if (value > maximum)
		{
			maximum = value;
		}

		if (value < minimum)
		{
			minimum = value;
		}
	}

	printf("Max=%d, Min=%d\n", maximum, minimum);

	return 0;
}
