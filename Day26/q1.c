/*
Q51: Write a program to print the following pattern:
    5
   45
  345
 2345
12345
*/

 #include <stdio.h>

int main(void)
{
	for (int row = 1; row <= 5; row++)
	{
		for (int space = 1; space <= 5 - row; space++)
		{
			printf(" ");
		}

		for (int number = 6 - row; number <= 5; number++)
		{
			printf("%d", number);
		}

		printf("\n");
	}

	return 0;
}
