/*
Q49: Write a program to print the following pattern:
5
45
345
2345
12345
*/

 #include <stdio.h>

int main(void)
{
	for (int row = 5; row >= 1; row--)
	{
		for (int number = row; number <= 5; number++)
		{
			printf("%d", number);
		}
		printf("\n");
	}

	return 0;
}
