#include <stdio.h>

int main(void)
{
	for (int stars = 1; stars <= 7; stars += 2)
	{
		int spaces = (7 - stars) / 2;

		for (int count = 0; count < spaces; count++)
		{
			printf(" ");
		}

		for (int count = 0; count < stars; count++)
		{
			printf("*");
		}
		printf("\n");
	}

	for (int stars = 5; stars >= 1; stars -= 2)
	{
		int spaces = (7 - stars) / 2;

		for (int count = 0; count < spaces; count++)
		{
			printf(" ");
		}

		for (int count = 0; count < stars; count++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
