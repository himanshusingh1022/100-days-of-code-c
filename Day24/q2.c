/*
Q48: Write a program to print the following pattern:
1
12
123
1234
12345
*/

#include <stdio.h>

int main(void)
{
	for (int row = 1; row <= 5; row++)
	{
		for (int number = 1; number <= row; number++)
		{
			printf("%d", number);
		}
		printf("\n");
	}

	return 0;
}
