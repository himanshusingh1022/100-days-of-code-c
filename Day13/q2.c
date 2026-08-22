/*
Q26: Write a program to print numbers from 1 to n.
*/

#include <stdio.h>

int main(void)
{
	int n;

	scanf("%d", &n);

	for (int number = 1; number <= n; number++)
	{
		if (number > 1)
			printf(" ");
		printf("%d", number);
	}

	printf("\n");

	return 0;
}
