#include <stdio.h>

int main(void)
{
	int n;

	if (scanf("%d", &n) != 1 || n < 0)
	{
		return 1;
	}

	int elements[n];

	for (int index = 0; index < n; index++)
	{
		if (scanf("%d", &elements[index]) != 1)
		{
			return 1;
		}
	}

	for (int index = 0; index < n; index++)
	{
		if (index > 0)
		{
			printf(" ");
		}

		printf("%d", elements[index]);
	}

	return 0;
}
